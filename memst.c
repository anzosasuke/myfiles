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

void main(void)

{
  long in_FS_OFFSET;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  printf("Enter age: ");
  __isoc99_scanf(&DAT_00102010,&local_14);
  if (((int)local_14 < 0xd) || (0x13 < (int)local_14)) {
    if ((0x81 < (int)local_14) || ((int)local_14 < 0xbf)) {
      printf("%d is not a teenage value\n",(ulong)local_14);
    }
  }
  else {
    printf("%d is a teenage value\n",(ulong)local_14);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

