const torna_positivo = require("./torna_positivo");

const MDC = function (a, b) {
  a = torna_positivo (a);
  b = torna_positivo (b);
  min = 0;
  max = 0;
  res = 0;
  if (a >= b)
    {
      max = a;
      min = b;
    }
  else
    {
      max = b;
      min = a;
    }
  while (min > 0)
    {
      res = max - min;
      if (res >= min)
	{
	  max = res;
	}
      else
	{
	  max = min;
	  min = res;
	}
    }
  return max;
}

module.exports = MDC;
