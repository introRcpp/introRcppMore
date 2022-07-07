#include <Rcpp.h>
using namespace Rcpp;

double d2(double a, double b) {
  return (a*a + b*b);
}

int d2(int a, int b) {
  return (a*a + b*b);
}

//[[Rcpp::export]]
void exampleD2() {
  double x = 1.0;
  double y = 2.4;
  double z = d2(x, y);
  Rcout << "d2(x,y) = " << z << std::endl;
  int u = 1;
  int v = 4;
  int w = d2(u, v);
  Rcout << "d2(u,v) = " << w << std::endl;
} 
