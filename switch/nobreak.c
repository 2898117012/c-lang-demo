#include <stdio.h>
int main(void) {
   int a = 5;
   switch(a){
      case 4:
         printf("%d\n",4);
      case 5:
         printf("%d\n",5);
      case 6:
         printf("%d\n",6);
      default:
         printf("default");
   }
   return 0;
}
