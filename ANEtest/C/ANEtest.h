/*
 * ANEtest.h
 *
 *  Created on: Nov 7, 2012
 *      Author: Administrador
 */

#ifndef ANETEST_H_
#define ANETEST_H_

#include "FlashRuntimeExtensions.h"

__declspec(dllexport) void initializer(void **extData, FREContextInitializer* ctxInitializer, FREContextFinalizer* ctxFinalizer);
__declspec(dllexport) void finalizer(void *extData);

#endif /* ANETEST_H_ */
