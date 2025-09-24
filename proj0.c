#include "types.h"
#include "stat.h"
#include "user.h"

int
 main(int argc, char *argv[])
{
  int i;
  char str[]="CSE ";
  printf(1,"%s\n",str);
  for(i = 1; i < argc; i++)
    printf(1, "%s%s", argv[i], i+1 < argc ? " " : "\n");
  exit();
}