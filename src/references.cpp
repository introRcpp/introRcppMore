#include <Rcpp.h>
#include "show.h"
// [[Rcpp::export]]
void references() {
  int x = 12;   // entier
  int & y = x;  // référence à x
  SHOW(x);
  SHOW(y);
  SHOW(&x);
  SHOW(&y);
  Rcpp::Rcout << "On ajoute 1 à x\n";
  x += 1;
  SHOW(x);
  SHOW(y);
  Rcpp::Rcout << "On ajoute 1 à y\n";
  y += 1;
  SHOW(x);
  SHOW(y);
} 
