const mdc = require ("./mdc");

const MMC = function (a, b) {
  return ((a * b) / mdc (a, b));
}

module.exports = MMC;
