// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// file_type
Rcpp::CharacterVector file_type(Rcpp::CharacterVector files, bool mime_type, bool mime_encoding, Rcpp::Nullable<Rcpp::CharacterVector> magicfiles);
RcppExport SEXP _dqmagic_file_type(SEXP filesSEXP, SEXP mime_typeSEXP, SEXP mime_encodingSEXP, SEXP magicfilesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type files(filesSEXP);
    Rcpp::traits::input_parameter< bool >::type mime_type(mime_typeSEXP);
    Rcpp::traits::input_parameter< bool >::type mime_encoding(mime_encodingSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type magicfiles(magicfilesSEXP);
    rcpp_result_gen = Rcpp::wrap(file_type(files, mime_type, mime_encoding, magicfiles));
    return rcpp_result_gen;
END_RCPP
}
// magicVersion
int magicVersion();
RcppExport SEXP _dqmagic_magicVersion() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(magicVersion());
    return rcpp_result_gen;
END_RCPP
}
// magicPathDefault
std::string magicPathDefault();
RcppExport SEXP _dqmagic_magicPathDefault() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(magicPathDefault());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_dqmagic_file_type", (DL_FUNC) &_dqmagic_file_type, 4},
    {"_dqmagic_magicVersion", (DL_FUNC) &_dqmagic_magicVersion, 0},
    {"_dqmagic_magicPathDefault", (DL_FUNC) &_dqmagic_magicPathDefault, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_dqmagic(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
