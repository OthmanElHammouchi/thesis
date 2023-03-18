// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppThread.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// glm_boot
Rcpp::NumericVector glm_boot(Rcpp::NumericMatrix triangle, int n_boot);
RcppExport SEXP _patternBreak_glm_boot(SEXP triangleSEXP, SEXP n_bootSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type triangle(triangleSEXP);
    Rcpp::traits::input_parameter< int >::type n_boot(n_bootSEXP);
    rcpp_result_gen = Rcpp::wrap(glm_boot(triangle, n_boot));
    return rcpp_result_gen;
END_RCPP
}
// glm_sim
Rcpp::NumericMatrix glm_sim(Rcpp::NumericMatrix triangle, int n_boot, Rcpp::NumericMatrix config, int type);
RcppExport SEXP _patternBreak_glm_sim(SEXP triangleSEXP, SEXP n_bootSEXP, SEXP configSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type triangle(triangleSEXP);
    Rcpp::traits::input_parameter< int >::type n_boot(n_bootSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type config(configSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(glm_sim(triangle, n_boot, config, type));
    return rcpp_result_gen;
END_RCPP
}
// mack_boot
Rcpp::NumericVector mack_boot(Rcpp::NumericMatrix triangle, int n_boot, int resids_type, int boot_type, int dist);
RcppExport SEXP _patternBreak_mack_boot(SEXP triangleSEXP, SEXP n_bootSEXP, SEXP resids_typeSEXP, SEXP boot_typeSEXP, SEXP distSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type triangle(triangleSEXP);
    Rcpp::traits::input_parameter< int >::type n_boot(n_bootSEXP);
    Rcpp::traits::input_parameter< int >::type resids_type(resids_typeSEXP);
    Rcpp::traits::input_parameter< int >::type boot_type(boot_typeSEXP);
    Rcpp::traits::input_parameter< int >::type dist(distSEXP);
    rcpp_result_gen = Rcpp::wrap(mack_boot(triangle, n_boot, resids_type, boot_type, dist));
    return rcpp_result_gen;
END_RCPP
}
// mack_sim
Rcpp::NumericMatrix mack_sim(Rcpp::NumericMatrix triangle, int n_boot, Rcpp::NumericMatrix config, int type);
RcppExport SEXP _patternBreak_mack_sim(SEXP triangleSEXP, SEXP n_bootSEXP, SEXP configSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type triangle(triangleSEXP);
    Rcpp::traits::input_parameter< int >::type n_boot(n_bootSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type config(configSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(mack_sim(triangle, n_boot, config, type));
    return rcpp_result_gen;
END_RCPP
}
// validate_rng
String validate_rng(int n_samples);
RcppExport SEXP _patternBreak_validate_rng(SEXP n_samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_samples(n_samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(validate_rng(n_samples));
    return rcpp_result_gen;
END_RCPP
}
// test_pois
Rcpp::NumericVector test_pois(int n, double lambda);
RcppExport SEXP _patternBreak_test_pois(SEXP nSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(test_pois(n, lambda));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_patternBreak_glm_boot", (DL_FUNC) &_patternBreak_glm_boot, 2},
    {"_patternBreak_glm_sim", (DL_FUNC) &_patternBreak_glm_sim, 4},
    {"_patternBreak_mack_boot", (DL_FUNC) &_patternBreak_mack_boot, 5},
    {"_patternBreak_mack_sim", (DL_FUNC) &_patternBreak_mack_sim, 4},
    {"_patternBreak_validate_rng", (DL_FUNC) &_patternBreak_validate_rng, 1},
    {"_patternBreak_test_pois", (DL_FUNC) &_patternBreak_test_pois, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_patternBreak(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
