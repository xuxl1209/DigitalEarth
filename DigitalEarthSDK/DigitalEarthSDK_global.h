#ifndef DIGITALEARTHSDK_GLOBAL_H
#define DIGITALEARTHSDK_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DIGITALEARTHSDK_LIBRARY)
#  define DIGITALEARTHSDK_EXPORT Q_DECL_EXPORT
#else
#  define DIGITALEARTHSDK_EXPORT Q_DECL_IMPORT
#endif

#endif // DIGITALEARTHSDK_GLOBAL_H
