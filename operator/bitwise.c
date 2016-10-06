#include <stdio.h>
void reverse(char *s,int len){
    int i;
    for(i= 0;i<len/2;i++){
        char ch = s[i];
        s[i] = s[len-i-1];
        s[len-i-1] = ch;
    }
}
void dec2bin(int n,char *s){
    int i = 0;
    do{
        s[i++] = n % 2 ? '1' : '0' ;
        n /= 2;
    }while(n);
    s[i] = 0;
    reverse(s,i);
}
int main(void) {
    int x = 100;
    int y = 6;
    int z = x & y;
    char x_str[25];
    char y_str[25];
    char z_str[25];
    dec2bin(x,x_str);
    printf("x 二进制值为：%s\n",x_str);
    dec2bin(y,y_str);
    printf("y 二进制值为：%s\n",y_str);
    dec2bin(z,z_str);
    printf("z 二进制值为：%s\n",z_str);
    return 0;
}
