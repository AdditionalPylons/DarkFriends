#include "stdafx.h"
#include "Log.h"
#include <stdio.h>
#include <stdarg.h>

using std::string;

extern HMODULE thisModule;

void Log(std::string format, ...) 
{
	va_list args;
	va_start(args, format);
	vprintf(format.c_str(), args); //this needs to write to file next to dll
	va_end(args);

}

