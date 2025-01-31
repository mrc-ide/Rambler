#include <Rcpp.h>

#include "misc_v16.h"
#include "probability_v18.h"

//------------------------------------------------
// run basic example mcmc
// [[Rcpp::export]]
Rcpp::List run_mcmc_cpp(Rcpp::List args_data, Rcpp::List args_params,
                        Rcpp::List args_MCMC, Rcpp::List args_progress,
                        Rcpp::List args_functions);
