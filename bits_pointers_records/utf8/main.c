#include <stdio.h>
#include "utf8.h"

int main(void)
{
  unsigned int koodit[6] = {228, 49340, 49457, 12477, 12491, 12540};
  unsigned char utf8[5];
  int i = 0;
  for(i = 0; i < 7; ++i)
  {
    utf8_koodaa(koodit[i], utf8);
    printf("%s\n", utf8);
  }
  return 0;
}
