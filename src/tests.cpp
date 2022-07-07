#include <Rcpp.h>
#include <cmath>       // !!! CE HEADER EST NÉCESSAIRE
//[[Rcpp::export]]
void tests(double x) {
  if(std::isnan(x)) Rcpp::Rcout << "NaN\n";
  if(std::isinf(x)) Rcpp::Rcout << "infini\n";
  if(std::isfinite(x)) Rcpp::Rcout << "fini\n";
} 
