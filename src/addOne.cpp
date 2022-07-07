#include <Rcpp.h>
//[[Rcpp::export]]
void addOne(Rcpp::IntegerVector x) {
  for(auto & a : x) {
    a++;
  }
} 
