#define CATCH_CONFIG_MAIN
#define DO_NOT_USE_WMAIN

#include "monolithic_examples.h"

#if defined(BUILD_MONOLITHIC)
#define main                   frozen_tests_main
#endif

#include "catch.hpp"
