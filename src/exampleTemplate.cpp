#include <Rcpp.h>
#include "d2.h"
//[[Rcpp::export]]
void exampleTemplate() {
  double x = 1.0;
  double y = 2.4;
  double z = d2(x, y);
  Rcpp::Rcout << "d2(x,y) = " << z << std::endl;
  int u = 1;
  int v = 4;
  int w = d2(u, v);
  Rcpp::Rcout << "d2(u,v) = " << w << std::endl;
} 
