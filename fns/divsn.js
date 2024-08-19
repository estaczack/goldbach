const isprime = require ("./isprime");

const divsn = function (n) {
  let res = [];
  for (i = 2; i <= n; i++)
    {
      if ((n % i) == 0)
	{
	  if (isprime (i))
	    {
	      res.push (i);
	    }
	}
    }
  return res;
}

module.exports = divsn;
