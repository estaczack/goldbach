const g = function (n) {
  if ((n % 2) == 1)
    return undefined;
  if (n < 6)
    return undefined;
  return ((n - 6) / 2);
}

module.exports = g;
