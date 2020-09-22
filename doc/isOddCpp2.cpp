/*
 Fonction qui retourne un T/F dépendemment de si l'entrée est impaire ou pas.
 Septembre 23, 2020
 Victor Cameron
 */

/*
 Parameters
 num: integer
 */

#include <Rcpp.h>
using namespace Rcpp;


// [[Rcpp::export]]
bool isOddCpp2(int num) {
  
  bool result = (num % 2 == 1);
  
  return result;
}
