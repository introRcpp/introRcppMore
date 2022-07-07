#include <Rcpp.h>
#include <cmath>
#include "show.h"

bool quadratic(double a, double b, double c, double & x1, double & x2) {
  double delta = b*b - 4*a*c;
  if(delta < 0)
    return false;
  double sqrt_delta = std::sqrt(delta);
  x1 = (-b - sqrt_delta)/(2*a);
  x2 = (-b + sqrt_delta)/(2*a);
  return true;
}

//[[Rcpp::export]]
void demoQuadratic(double a, double b, double c) {
  double x1, x2;
  bool solvable = quadratic(a, b, c, x1, x2);
  if(solvable) {
    SHOW(x1);
    SHOW(x2);
  } else {
    Rcpp::Rcout << "Pas de solution\n";
  }
} 
