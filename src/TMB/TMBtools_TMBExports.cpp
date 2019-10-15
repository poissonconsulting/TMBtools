// Generated by TMB: do not edit by hand

#define TMB_LIB_INIT R_init_TMBtools_TMBExports
#include <TMB.hpp>
#include "GammaNLL.hpp"
#include "NormNLL.hpp"

template<class Type>
Type objective_function<Type>::operator() () {
  DATA_STRING(model);
  if(model == "GammaNLL") {
    return GammaNLL(this);
  } else if(model == "NormNLL") {
    return NormNLL(this);
  } else {
    error("Unknown model.");
  }
  return 0;
}
