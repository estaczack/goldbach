// mdc.test.js
const mdc = require('./mdc');

describe('mdc', () => {
  test('MDC de 10 e 5 deve ser 5', () => {
    expect(mdc(10, 5)).toBe(5);
  });

  test('MDC de 14 e 21 deve ser 7', () => {
    expect(mdc(14, 21)).toBe(7);
  });

  test('MDC de 27 e 18 deve ser 9', () => {
    expect(mdc(27, 18)).toBe(9);
  });

  test('MDC de números primos (17 e 13) deve ser 1', () => {
    expect(mdc(17, 13)).toBe(1);
  });

  test('MDC de 0 e qualquer número n deve ser n (MDC de 0 e 5 deve ser 5)', () => {
    expect(mdc(0, 5)).toBe(5);
  });

  test('MDC de qualquer número n e 0 deve ser n (MDC de 5 e 0 deve ser 5)', () => {
    expect(mdc(5, 0)).toBe(5);
  });

  test('MDC de números negativos (-10 e -5) deve ser tratado corretamente', () => {
    expect(mdc(-10, -5)).toBe(5);
  });

  test('MDC de um número negativo e um positivo (-15 e 5) deve ser tratado corretamente', () => {
    expect(mdc(-15, 5)).toBe(5);
  });

  test('MDC de 0 e 0 deve ser 0', () => {
    expect(mdc(0, 0)).toBe(0);
  });
});
