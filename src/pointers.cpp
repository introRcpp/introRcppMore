#include <Rcpp.h>
#include "show.h"
// [[Rcpp::export]]
void pointers() {
  int x = 12;   // entier
  int * p;      // pointeur vers un entier (non initialis√© !!)
  p = &x;       // p pointe vers x
  SHOW(x);
  SHOW(p);
  SHOW(*p);
  Rcpp::Rcout << "On ajoute 1 √† x\n";
  x += 1;
  SHOW(x);
  SHOW(p);
  Rcpp::Rcout << "On ajoute 1 √† *p\n";
  *p += 1;
  SHOW(x);
  SHOW(p);
} 
