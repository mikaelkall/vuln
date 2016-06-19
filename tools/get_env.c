#include <stdlib.h>
#include <stdio.h>
 
int main(int argc, char *argv[]) {

   char *addr;
   if (argc < 2) {
       printf("Usage: %s <environment variable name>\n", argv[0]);
       exit(0);
   }
 
   addr = getenv(argv[1]);
   if (addr == NULL)
   {
       printf("The environment variable %s doesn't exist.\n", argv[1]);
   } 
   else
   {
       printf("%s is located at %p\n", argv[1], addr);
   }

return(0);
}
