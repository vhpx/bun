import { describe, expect, it, vi } from 'vitest'
import { getWorkspace } from './getWorkspace'

vi.mock('./createServerComponentClient', () => {
  return {
    createServerComponentClient: () => {
      return {
        auth: {
          getUser: async () => {
            return {
              data: {
                user: 'fake-user-id',
              },
            }
          },
        },
        from: () => {
          return {
            select: () => {
              return {
                eq: () => {
                  return {
                    single: async () => {
                      return {
                        data: {
                          id: 'fake-workspace-id',
                          name: 'fake-workspace-name',
                          preset: 'fake-preset',
                          avatar_url: 'fake-avatar-url',
                          logo_url: 'fake-logo-url',
                          created_at: 'fake-created-at',
                          workspace_members: [
                            {
                              role: 'fake-role',
                            },
                          ],
                        },
                      }
                    },
                  }
                },
              }
            },
          }
        },
      }
    },
  }
})

describe('getWorkspace', () => {
  it('should return null if no id is provided', async () => {
    const result = await getWorkspace()
    expect(result).toBeNull()
  })

  it('should return notFound if the user is not a member of the workspace', async () => {
    const result = await getWorkspace('fake-workspace-id')
    expect(result).toBeNull()
  })

  it('should return the workspace if the user is a member', async () => {
    const result = await getWorkspace('fake-workspace-id')
    expect(result).toEqual({
      id: 'fake-workspace-id',
      name: 'fake-workspace-name',
      preset: 'fake-preset',
      avatar_url: 'fake-avatar-url',
      logo_url: 'fake-logo-url',
      created_at: 'fake-created-at',
      role: 'fake-role',
    })
  })
})