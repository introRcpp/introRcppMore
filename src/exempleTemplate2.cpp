#include <Rcpp.h>
#include "d2.h"
using namespace Rcpp;

//[[Rcpp::export]]
NumericVector exempleTemplate2(NumericVector x, NumericVector y) {
  return d2(x,y);
} 
