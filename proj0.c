#include "types.h"
#include "stat.h"
#include "user.h"

int
 main(int argc, char *argv[])
{
  int i;
  char str[]="CSE3320 proj0 printing in user space: ";
  printf(1,"%s",str);
  for(i = 1; i < argc; i++)
    printf(1, "%s%s", argv[i], i+1 < argc ? " " : "\n");
  exit();
}
