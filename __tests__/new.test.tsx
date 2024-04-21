```typescript
import { describe, expect, it, vi } from 'vitest';

describe('Longest Substring', () => {
  it('should return the longest substring without repeating characters', () => {
    const s = 'abcabcbb';
    const expected = 'abc';
    const result = longestSubstring(s);
    expect(result).toBe(expected);
  });

  it('should return an empty string if the input string is empty', () => {
    const s = '';
    const expected = '';
    const result = longestSubstring(s);
    expect(result).toBe(expected);
  });

  it('should return the longest substring without repeating characters, even if there are non-alphabetic characters', () => {
    const s = 'abcabc123bb';
    const expected = 'abc123';
    const result = longestSubstring(s);
    expect(result).toBe(expected);
  });
});

// Sliding window approach
const longestSubstring = (s: string): string => {
  if (s.length === 0) return '';
  let longestSubstring = '';
  let start = 0;
  let end = 0;
  let charCount: Record<string, number> = {};
  while (end < s.length) {
    const char = s[end];
    charCount[char] = charCount[char] ? charCount[char] + 1 : 1;
    while (charCount[char] > 1) {
      const startChar = s[start];
      charCount[startChar]--;
      start++;
    }
    if (end - start + 1 > longestSubstring.length) {
      longestSubstring = s.substring(start, end + 1);
    }
    end++;
  }
  return longestSubstring;
};
```