const isprime = require('./isprime');

describe('isprime', () => {
  test('isprime de -1 deve ser false', () => {
    expect(isprime(-1)).toBe(false);
  });

  test('isprime de 1 deve ser false', () => {
    expect(isprime(1)).toBe(false);
  });

  test('isprime de 2 deve ser true', () => {
    expect(isprime(2)).toBe(true);
  });

  test('isprime de 7 deve ser true', () => {
    expect(isprime(7)).toBe(true);
  });

  test('isprime de 363 deve ser false', () => {
    expect(isprime(363)).toBe(false);
  });

  test('isprime de 257 deve ser true', () => {
    expect(isprime(257)).toBe(true);
  });

});
