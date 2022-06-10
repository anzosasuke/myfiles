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

void f(char *password, size_t bufferSize, char *token1, size_t buffersz)
{

  char localToken[256];
  char localBuffer[256];
  // init(localToken, password);
  memset(password, ' ', strlen(password));
  password = token1; // Noncompliant, password is about to be freed
  memset(token1, ' ', strlen(token1));
  
  memset(localToken, ' ', strlen(localBuffer)); // Noncompliant, localToken is about to go out of scope
  free(password);
  free(token1);
}
// ptr ==> Starting address of memory to be filled
// x   ==> Value to be filled
// n   ==> Number of bytes to be filled starting
//         from ptr to be filled
// void *memset(void *ptr, int x, size_t n);

int main()
{
char *password;
char *token1;
token1 = (char*)malloc(10);
password = (char*)malloc(10);//typecasting 
printf("enter your password: ");

scanf("%s", password);
printf("%s", password);

f(password, 10, token1, 10);
printf("%s\n",password );
return 0;
}



