import { describe, expect, it } from 'vitest'

describe('isPrime', () => {
  it('should return true for prime numbers', () => {
    expect(isPrime(2)).toBe(true)
    expect(isPrime(3)).toBe(true)
    expect(isPrime(5)).toBe(true)
    expect(isPrime(7)).toBe(true)
    expect(isPrime(11)).toBe(true)
  })

  it('should return false for non-prime numbers', () => {
    expect(isPrime(0)).toBe(false)
    expect(isPrime(1)).toBe(false)
    expect(isPrime(4)).toBe(false)
    expect(isPrime(6)).toBe(false)
    expect(isPrime(8)).toBe(false)
  })
})