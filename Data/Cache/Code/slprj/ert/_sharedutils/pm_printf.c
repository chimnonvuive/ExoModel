/* Simscape target specific file.
 * Abstract:
 *
 *    Conditionally include implementations for wrappers of printf
 *    functionality.
 *
 * Copyright 2015-2016 The MathWorks, Inc.
 */

/* only Visual compile printf implementations */

#if defined(_MSC_VER)
#include "pm_printf.h"

#else
/*
 * included to avoid empty translation unit
 */
typedef int pm_printf_dummy;
#endif
