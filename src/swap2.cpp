#include <Rcpp.h>
#include "show.h"

// les arguments sont des références à des entiers
inline void swap2(int & x, int & y) {
  int tmp = x;
  x = y;
  y = tmp;
}

// [[Rcpp::export]]
void demonstrateSwap2(int a, int b) {
  if(a > b) swap2(a,b); // on passe directement x et y
  SHOW(a);
  SHOW(b);
} 
