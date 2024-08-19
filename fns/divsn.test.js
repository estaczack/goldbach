const divsn = require('./divsn');

describe('divsn', () => {
  test('divsn de 2 deve ser [2]', () => {
    expect(divsn(2)).toStrictEqual([2]);
  });
});
