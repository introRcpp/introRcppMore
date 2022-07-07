#include <Rcpp.h>
using namespace Rcpp;
//[[Rcpp::export]]
void incrementAlpha(List x) {
  if( x.containsElementNamed("alpha") ) {
    SEXP R = x["alpha"];
    if( TYPEOF(R) != REALSXP )
      stop("elt alpha n'est pas un 'NumericVector'");
    NumericVector Alpha(R);
    Alpha = Alpha+1;  // sugar
  } else 
    stop("Pas d'elt alpha");
} 
