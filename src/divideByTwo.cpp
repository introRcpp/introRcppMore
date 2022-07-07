void divideByTwo(int & x) {
  x /= 2;
}

// [[Rcpp::export]]
int intLog2(int a) {
  int k = 0; 
  while(a != 0) {
    divideByTwo(a);
    k++;
  }
  return k-1;
} 
