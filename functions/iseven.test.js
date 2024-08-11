const iseven = require('./iseven');

describe('iseven', () => {
  test('iseven de 5 deve ser false', () => {
    expect(iseven(5)).toBe(false);
  });

  test('iseven de 6 deve ser true', () => {
    expect(iseven(6)).toBe(true);
  });
});
