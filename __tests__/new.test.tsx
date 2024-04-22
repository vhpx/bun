import { vi } from 'vitest'

vi.mock('../src/users', () => ({
  users: [
    { name: 'Alice' },
    { name: 'Bob' },
  ],
}))

import { isQuoc } from '../src/isQuoc'

describe('isQuoc', () => {
  it('should return false for a user that is not quoc', () => {
    expect(isQuoc('Alice')).toBe(false)
  })

  it('should return true for a user that is quoc', () => {
    expect(isQuoc('Quoc')).toBe(true)
  })
})