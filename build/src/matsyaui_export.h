
#ifndef MATSYAUI_EXPORT_H
#define MATSYAUI_EXPORT_H

#ifdef MATSYAUI_STATIC_DEFINE
#  define MATSYAUI_EXPORT
#  define MATSYAUI_NO_EXPORT
#else
#  ifndef MATSYAUI_EXPORT
#    ifdef MatsyaUI_EXPORTS
        /* We are building this library */
#      define MATSYAUI_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define MATSYAUI_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef MATSYAUI_NO_EXPORT
#    define MATSYAUI_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef MATSYAUI_DEPRECATED
#  define MATSYAUI_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef MATSYAUI_DEPRECATED_EXPORT
#  define MATSYAUI_DEPRECATED_EXPORT MATSYAUI_EXPORT MATSYAUI_DEPRECATED
#endif

#ifndef MATSYAUI_DEPRECATED_NO_EXPORT
#  define MATSYAUI_DEPRECATED_NO_EXPORT MATSYAUI_NO_EXPORT MATSYAUI_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef MATSYAUI_NO_DEPRECATED
#    define MATSYAUI_NO_DEPRECATED
#  endif
#endif

#endif /* MATSYAUI_EXPORT_H */
