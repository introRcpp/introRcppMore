#ifndef _numDerivation_
#define _numDerivation_

#ifndef epsilon 
#define epsilon 0.001
#endif

template<typename TYPE, typename FTYPE>
TYPE numDerivation(FTYPE f, TYPE a) {
  return (f(a+epsilon) - f(a-epsilon))/(2.0*epsilon);
}
#endif
