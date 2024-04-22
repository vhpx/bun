import { describe, expect, test } from 'vitest';

describe('isPrime', () => {
  test('should return true for prime numbers', () => {
    expect(isPrime(2)).toBe(true);
    expect(isPrime(3)).toBe(true);
    expect(isPrime(5)).toBe(true);
    expect(isPrime(7)).toBe(true);
    expect(isPrime(11)).toBe(true);
    expect(isPrime(13)).toBe(true);
  });

  test('should return false for non-prime numbers', () => {
    expect(isPrime(1)).toBe(false);
    expect(isPrime(4)).toBe(false);
    expect(isPrime(6)).toBe(false);
    expect(isPrime(8)).toBe(false);
    expect(isPrime(9)).toBe(false);
  });

  test('should return false for negative numbers', () => {
    expect(isPrime(-1)).toBe(false);
    expect(isPrime(-2)).toBe(false);
    expect(isPrime(-3)).toBe(false);
    expect(isPrime(-5)).toBe(false);
    expect(isPrime(-7)).toBe(false);
  });

  test('should return false for extremely large non-prime numbers', () => {
    expect(isPrime(9007199254740991)).toBe(false); // 2^53 - 1
    expect(isPrime(18446744073709551615)).toBe(false); // 2^64 - 1
    expect(isPrime(340282366920938463463374607431768211455)).toBe(false); // 2^128 - 1
  });
});

function isPrime(num: number) {
  if (num <= 1) return false;

  for (let i = 2; i <= Math.sqrt(num); i++) {
    if (num % i === 0) {
      return false;
    }
  }

  return true;
}