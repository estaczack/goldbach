const s = require('./s');

describe('s', () => {
  test('s de -1 deve ser undefined', () => {
    expect(s(-1)).toBeUndefined();
  });

  test('s de 0 deve ser 3', () => {
    expect(s(0)).toBe(3);
  });

  test('s de 50 deve ser 103', () => {
    expect(s(50)).toBe(103);
  });
});
