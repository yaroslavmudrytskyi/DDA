// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// weighted_mean_arit
double weighted_mean_arit(std::vector<double> x, std::vector<double> w);
RcppExport SEXP _FORTLS_weighted_mean_arit(SEXP xSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(weighted_mean_arit(x, w));
    return rcpp_result_gen;
END_RCPP
}
// weighted_mean_sqrt
double weighted_mean_sqrt(std::vector<double> x, std::vector<double> w);
RcppExport SEXP _FORTLS_weighted_mean_sqrt(SEXP xSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(weighted_mean_sqrt(x, w));
    return rcpp_result_gen;
END_RCPP
}
// weighted_mean_geom
double weighted_mean_geom(std::vector<double> x, std::vector<double> w);
RcppExport SEXP _FORTLS_weighted_mean_geom(SEXP xSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(weighted_mean_geom(x, w));
    return rcpp_result_gen;
END_RCPP
}
// weighted_mean_harm
double weighted_mean_harm(std::vector<double> x, std::vector<double> w);
RcppExport SEXP _FORTLS_weighted_mean_harm(SEXP xSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(weighted_mean_harm(x, w));
    return rcpp_result_gen;
END_RCPP
}
// height_perc_cpp
DataFrame height_perc_cpp(std::vector<double> rho_seq, std::vector<double> z, std::vector<double> rho);
RcppExport SEXP _FORTLS_height_perc_cpp(SEXP rho_seqSEXP, SEXP zSEXP, SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type rho_seq(rho_seqSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type z(zSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type rho(rhoSEXP);
    rcpp_result_gen = Rcpp::wrap(height_perc_cpp(rho_seq, z, rho));
    return rcpp_result_gen;
END_RCPP
}
// fixed_area_cpp
DataFrame fixed_area_cpp(std::vector<double> radius_seq, std::vector<double> hdist, std::vector<double> d, std::vector<double> h, double num);
RcppExport SEXP _FORTLS_fixed_area_cpp(SEXP radius_seqSEXP, SEXP hdistSEXP, SEXP dSEXP, SEXP hSEXP, SEXP numSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type radius_seq(radius_seqSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type hdist(hdistSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type d(dSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type h(hSEXP);
    Rcpp::traits::input_parameter< double >::type num(numSEXP);
    rcpp_result_gen = Rcpp::wrap(fixed_area_cpp(radius_seq, hdist, d, h, num));
    return rcpp_result_gen;
END_RCPP
}
// k_tree_cpp
DataFrame k_tree_cpp(std::vector<double> k_seq, std::vector<double> radius_seq, std::vector<double> k, std::vector<double> d, std::vector<double> h, double num);
RcppExport SEXP _FORTLS_k_tree_cpp(SEXP k_seqSEXP, SEXP radius_seqSEXP, SEXP kSEXP, SEXP dSEXP, SEXP hSEXP, SEXP numSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type k_seq(k_seqSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type radius_seq(radius_seqSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type k(kSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type d(dSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type h(hSEXP);
    Rcpp::traits::input_parameter< double >::type num(numSEXP);
    rcpp_result_gen = Rcpp::wrap(k_tree_cpp(k_seq, radius_seq, k, d, h, num));
    return rcpp_result_gen;
END_RCPP
}
// angle_count_cpp
DataFrame angle_count_cpp(std::vector<double> baf_seq, std::vector<double> baf, std::vector<double> d, std::vector<double> h, double num);
RcppExport SEXP _FORTLS_angle_count_cpp(SEXP baf_seqSEXP, SEXP bafSEXP, SEXP dSEXP, SEXP hSEXP, SEXP numSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type baf_seq(baf_seqSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type baf(bafSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type d(dSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type h(hSEXP);
    Rcpp::traits::input_parameter< double >::type num(numSEXP);
    rcpp_result_gen = Rcpp::wrap(angle_count_cpp(baf_seq, baf, d, h, num));
    return rcpp_result_gen;
END_RCPP
}
// ver_point_cloud_double
DataFrame ver_point_cloud_double(const Eigen::MatrixXd& m);
RcppExport SEXP _FORTLS_ver_point_cloud_double(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(ver_point_cloud_double(m));
    return rcpp_result_gen;
END_RCPP
}
// ncr_point_cloud_double
DataFrame ncr_point_cloud_double(const Eigen::MatrixXd& m);
RcppExport SEXP _FORTLS_ncr_point_cloud_double(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(ncr_point_cloud_double(m));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_FORTLS_weighted_mean_arit", (DL_FUNC) &_FORTLS_weighted_mean_arit, 2},
    {"_FORTLS_weighted_mean_sqrt", (DL_FUNC) &_FORTLS_weighted_mean_sqrt, 2},
    {"_FORTLS_weighted_mean_geom", (DL_FUNC) &_FORTLS_weighted_mean_geom, 2},
    {"_FORTLS_weighted_mean_harm", (DL_FUNC) &_FORTLS_weighted_mean_harm, 2},
    {"_FORTLS_height_perc_cpp", (DL_FUNC) &_FORTLS_height_perc_cpp, 3},
    {"_FORTLS_fixed_area_cpp", (DL_FUNC) &_FORTLS_fixed_area_cpp, 5},
    {"_FORTLS_k_tree_cpp", (DL_FUNC) &_FORTLS_k_tree_cpp, 6},
    {"_FORTLS_angle_count_cpp", (DL_FUNC) &_FORTLS_angle_count_cpp, 5},
    {"_FORTLS_ver_point_cloud_double", (DL_FUNC) &_FORTLS_ver_point_cloud_double, 1},
    {"_FORTLS_ncr_point_cloud_double", (DL_FUNC) &_FORTLS_ncr_point_cloud_double, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_FORTLS(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
