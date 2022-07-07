#include <Rcpp.h>
#include "swap.h"
#include "show.h"
// [[Rcpp::export]]
void demonstrateSwap3(int a, int b) {
  if(a > b) swap(a,b); // on passe directement x et y
  SHOW(a);
  SHOW(b);
} 
