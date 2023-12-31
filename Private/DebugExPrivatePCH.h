#pragma once

#include "DebugEx.h"

// You should place include statements to your module's private header files here.  You only need to
// add includes for headers that are used in most of your module's source files though.

#include "CoreEx.h"
#include "GuessExStatics.h"

#include "DebugExSettings.h"

//General Log
DECLARE_LOG_CATEGORY_EXTERN(LogDebugEx, Log, All);

//Logging during module startup
//DECLARE_LOG_CATEGORY_EXTERN(LogDebugExInit, Log, All);

//Logging for Critical Errors that must always be addressed
//DECLARE_LOG_CATEGORY_EXTERN(LogDebugExCriticalErrors, Log, All);
