```typescript
import { describe, expect, test } from 'vitest'

describe('My Test Suite', () => {
  test('should pass', () => {
    expect(true).toBe(true)
  })

  test('should fail', () => {
    expect(false).toBe(true)
  })

  test('should skip', () => {
    expect.skip(true).toBe(true)
  })

  test('should timeout', () => {
    return new Promise((resolve) => {
      setTimeout(() => {
        resolve(true)
      }, 1000)
    })
  }, 100)
})
```