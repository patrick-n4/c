#include <stdio.h>
#include <stdlib.h>

int main()
{
   char name[] = "Harry Potter"; // A string initialization as a character array
   printf("%c", *name);
   // Output: H
   printf("%c", *(name+1)); // Output: a
   printf("%c", *(name+7)); // Output: o
   char *namePtr;
   namePtr = name;
   printf("%c", *namePtr);
   // Output: H
   printf("%c", *(namePtr+1)); // Output: a
   printf("%c", *(namePtr+7)); // Output: o
    return 0;
}
