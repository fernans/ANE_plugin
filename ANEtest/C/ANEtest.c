/*
 * ANEtest.c
 *
 *  Created on: Nov 7, 2012
 *      Author: Fernans
 */

#include "ANEtest.h"
#include "stdlib.h"
#include "string.h"


FREObject isSupported(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]) {
	FREObject result;

	uint32_t isSupportedOnThisOS=1; // true
	FRENewObjectFromBool(isSupportedOnThisOS,&result);

	return result;
}

FREObject functionA(FREContext ctx, void* funcData, uint32_t argc, FREObject argv[]) {
	FREObject result;

	const char *str ="Hola";
	FRENewObjectFromUTF8(strlen(str)+1,(const uint8_t*)str, &result);

	return result;
}

//--------------------------------------------------

void contextInitializer(void *extData, const uint8_t *ctxType, FREContext ctx, uint32_t* numFunctions, const FRENamedFunction** functions) {
	*numFunctions=2;
	FRENamedFunction* func = (FRENamedFunction*)malloc(sizeof(FRENamedFunction*)*(*numFunctions));

	func[0].name= (const uint8_t*) "functionA";
	func[0].functionData=NULL;
	func[0].function=&functionA;

	func[1].name= (const uint8_t*) "isSupported";
	func[1].functionData=NULL;
	func[1].function=&isSupported;

	*functions=func;
}

void contextFinalizer(FREContext ctx) {
	return;
}


void initializer(void **extData, FREContextInitializer* ctxInitializer, FREContextFinalizer* ctxFinalizer) {
	*ctxInitializer=&contextInitializer;
	*ctxFinalizer=&contextFinalizer;
}


void finalizer(void *extData) {
	return;
}

