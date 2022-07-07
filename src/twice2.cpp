#include <Rcpp.h>
// Création d'un vecteur (initialisé à 0)
// [[Rcpp::export]]
Rcpp::NumericVector twice2(Rcpp::NumericVector x) {
  int n = x.size();
  // contrairement à ce qu'on pense, ceci ne copie pas x
  Rcpp::NumericVector y = x; 
  for(int i = 0; i < n; i++) y[i] *= 2;
  return y;
}

// [[Rcpp::export]]
Rcpp::NumericVector twice3(Rcpp::NumericVector x) {
  int n = x.size();
  // il faut utiliser clone
  Rcpp::NumericVector y = Rcpp::clone(x);
  for(int i = 0; i < n; i++) y[i] *= 2;
  return y;
} 
