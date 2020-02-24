// Generated by TMBtools: do not edit by hand

#define TMB_LIB_INIT R_init_TMBtools_TMBExports
#include <TMB.hpp>
#include "GammaNLL.hpp"
#include "NormalNLL.hpp"
#include "Rxz_dpd.hpp"
#include "xRy_dpd.hpp"
#include "xRy_pdp.hpp"
#include "xRz_pdd.hpp"
#include "ySx_pdp.hpp"

template<class Type>
Type objective_function<Type>::operator() () {
  DATA_STRING(model);
  if(model == "GammaNLL") {
    return GammaNLL(this);
  } else if(model == "NormalNLL") {
    return NormalNLL(this);
  } else if(model == "Rxz_dpd") {
    return Rxz_dpd(this);
  } else if(model == "xRy_dpd") {
    return xRy_dpd(this);
  } else if(model == "xRy_pdp") {
    return xRy_pdp(this);
  } else if(model == "xRz_pdd") {
    return xRz_pdd(this);
  } else if(model == "ySx_pdp") {
    return ySx_pdp(this);
  } else {
    error("Unknown model.");
  }
  return 0;
}
