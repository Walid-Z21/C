#include <stdio.h>

int main(){

    int age= 25;
    int *pAge=&age;

    printf("%p\n", &age);
    printf("%p", pAge);

    return 0;
}