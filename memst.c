#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// memset() is used to fill a block of memory with a particular value.
//memset is defined in string.h

// The compiler is generally allowed to remove code
// that does not have any effect, according to the abstract machine of the C language.
// This means that if you have a buffer that contains sensitive data (for instance passwords),
// calling memset on the buffer before releasing the memory will probably be optimized away.


// size_t is an unsigned integral data type which is defined in various header files such as:
 // <stddef.h>, <stdio.h>, <stdlib.h>, <string.h>, < time .h>, <wchar.h>
 // It's a type which is used to represent the
// size of objects in bytes and is therefore used as the return type by the sizeof operator.


undefined8 main(void)

{
  void *pvVar1;
  char *__s;
  
  pvVar1 = malloc(10);
  __s = (char *)malloc(10);
  printf("enter your password: ");
  __isoc99_scanf(&DAT_0010201a,__s);
  printf("%s",__s);
  f(__s,10,pvVar1,10);
  puts(__s);
  return 0;
}

void f(char *param_1,undefined8 param_2,char *param_3)

{
  size_t sVar1;
  long in_FS_OFFSET;
  undefined local_218 [256];
  char local_118 [264];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  sVar1 = strlen(param_1);
  memset(param_1,0x20,sVar1);
  sVar1 = strlen(param_3);
  memset(param_3,0x20,sVar1);
  sVar1 = strlen(local_118);
  memset(local_218,0x20,sVar1);
  free(param_3);
  free(param_3);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


