#include <stdio.h>
#include <string.h>

typedef int number;

int main(){

    // int numbers[]={1,3,5,7,9};
    // char grades[]={'A', 'B', 'C', 'D'};
    // char name[]="hello dudes";
    // numbers[1]=200;
    //printf("%d\n", numbers[1]);
    //printf("%c", name[4]);
    //  for ( int i=0 ; i<strlen(name); i++){
    //     printf("%c", name[i]);
    // }

    // to fill an array:
    number scores[5]={0}; 

    for(int i=0 ; i<5; i++){
        printf("enter score: ");
        scanf("%d", &scores[i]);
    }
    for(int i=0 ; i<5; i++){
        printf("%d ", scores[i]);
    }

    return 0;
}