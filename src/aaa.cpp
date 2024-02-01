#include <stdio.h>
#include "bbb.hpp"

static int x = 246;

void DoSometing() {
  printf("何かをする\n");

  printf("%d\n", ::x);

  DoSometing2();
}
