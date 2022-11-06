
#define STR_EXPAND(s) #s
#define STR(s) STR_EXPAND(s)

#define WRAPPER_FUN(NAME, POST) NAME ## POST
#define WRAPPER_FUN2(NAME, POST) WRAPPER_FUN(NAME, POST)

#define WRAPPER_CLASS WRAPPER_FUN2(PD_EXT_NAME, _tilde_class)

#define WRAPPER_HIDDEN WRAPPER_FUN2(_, PD_EXT_NAME)
#define WRAPPER_STRUCT WRAPPER_FUN2(WRAPPER_HIDDEN, _tilde)
#define WRAPPER_T WRAPPER_FUN2(t_, PD_EXT_NAME)
#define WRAPPER_TYPE WRAPPER_FUN2(WRAPPER_T, _tilde)

#define WRAPPER_NAMESPACE WRAPPER_FUN2(PD_EXT_NAME, _tilde)
#define WRAPPER_SETUP WRAPPER_FUN2(PD_EXT_NAME, _tilde_setup)
#define WRAPPER_NEW WRAPPER_FUN2(PD_EXT_NAME, _tilde_new)
#define WRAPPER_FREE WRAPPER_FUN2(PD_EXT_NAME, _tilde_free)
#define WRAPPER_PERFORM WRAPPER_FUN2(PD_EXT_NAME, _tilde_perform)
#define WRAPPER_DSP WRAPPER_FUN2(PD_EXT_NAME, _tilde_DSP)
#define WRAPPER_ANY_METHOD WRAPPER_FUN2(PD_EXT_NAME, _tilde_any_method)
#define WRAPPER_BANG WRAPPER_FUN2(PD_EXT_NAME, _tilde_bang)
#define WRAPPER_SR WRAPPER_FUN2(PD_EXT_NAME, _tilde_sr)