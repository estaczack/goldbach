// mdc.test.js
const mmc = require('./mmc');

describe('mmc', () => {
  test('MMC de 1 e 1 deve ser 1', () => {
    expect(mmc(1, 1)).toBe(1);
  });

  test('MMC de 2 e 2 deve ser 2', () => {
    expect(mmc(2, 2)).toBe(2);
  });

  test('MMC de 10 e 5 deve ser 10', () => {
    expect(mmc(10, 5)).toBe(10);
  });

  test('MMC de 3 e 5 deve ser 15', () => {
    expect(mmc(3, 5)).toBe(15);
  });
});
