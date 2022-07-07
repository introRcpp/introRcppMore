#include <Rcpp.h>
// Création d'un vecteur (initialisé à 0)
// [[Rcpp::export]]
Rcpp::NumericVector twice(Rcpp::NumericVector x) {
  int n = x.size();
  for(int i = 0; i < n; i++) {
    x[i] *= 2;
  }
  return x;
} 
