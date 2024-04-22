import { describe, expect, it } from 'vitest';

describe('My Test Suite', () => {
  it('should pass', () => {
    expect(true).toBe(true);
  });

  it('should fail', () => {
    expect(false).toBe(true);
  });

  it('should also pass', () => {
    expect(true).toBe(true);
  });

  it('should also fail', () => {
    expect(false).toBe(true);
  });
});