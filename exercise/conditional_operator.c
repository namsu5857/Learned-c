#include <stdio.h>

int main(){
    int var = 75;
    int var2 = 65;
    int num;
    char a = 65;

    num = sizeof(var) ? (var2 > 23 ? ((var ==75 ) ? 'A' : 0) : 0) : 0;
    printf("%d \n", num);
    printf("%c \n", a);
    return 0;
}