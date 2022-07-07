#include <Rcpp.h>
#include "show.h"
#include "numDerivation.h"

double square(double a) {
  return a*a;
}

//[[Rcpp::export]]
void derivSquare(double x) {
  double fx = square(x);
  double dfx = numDerivation(square, x);
  SHOW(fx);
  SHOW(dfx);
} 
