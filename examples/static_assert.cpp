#include <frozen/set.h>

#include "monolithic_examples.h"

static constexpr frozen::set<unsigned, 3> supported_sizes = {
  1, 2, 4
};

static_assert(supported_sizes.count(sizeof(short)), "unsupported size");

#if defined(BUILD_MONOLITHIC)
#define main                   frozen_static_assert_example_main
#endif

extern "C"
int main(void) { return 0; }
