#include <Rcpp.h>
//[[Rcpp::export]]
int countZeroes(Rcpp::IntegerVector x) {
  int re = 0;
  for(auto a : x) {
    if(a == 0) ++re;
  }
  return re;
} 
