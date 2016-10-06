#include <stdio.h>
int main(void) {
    int i = 10;
    do{
        printf("%d\n",i);
    }while(i--);
	return 0;
}
/***
 * output
 * 10
 * 9
 * 8
 * 7
 * 6
 * 5
 * 4
 * 3
 * 2
 * 1
 * 0
 ***/
