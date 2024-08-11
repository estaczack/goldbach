const g = require('./g');

describe('g', () => {
  test('g de 5 deve ser undefined', () => {
    expect(g(5)).toBeUndefined();
  });

  test('g de 4 deve ser undefined', () => {
    expect(g(4)).toBeUndefined();
  });

  test('g de 6 deve ser 0', () => {
    expect(g(6)).toBe(0);
  });
});
