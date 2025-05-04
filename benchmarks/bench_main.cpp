#include <benchmark/benchmark.h>

#include "monolithic_examples.h"

#if defined(BUILD_MONOLITHIC)
#define BENCHMARK_FAMILY_ID    "frozen"
#define main                   frozen_benchmark_main
#endif

BENCHMARK_MAIN();
