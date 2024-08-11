const torna_positivo = require('./torna_positivo');

describe('torna_positivo', () => {
  test('torna_positivo de 5 deve ser 5', () => {
    expect(torna_positivo(5)).toBe(5);
  });

  test('torna_positivo de 0 deve ser 0', () => {
    expect(torna_positivo(0)).toBe(0);
  });

  test('torna_positivo de -5 deve ser 5', () => {
    expect(torna_positivo(-5)).toBe(5);
  });
});
