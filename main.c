#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    // srand(time(NULL));

    // int min = 20;
    // int max = 90;

    // formula to generate random number with an offset of min and max number;
    //int randNum = rand() % (max - min + 1) + min;

    // printf("%d",randNum);


    int num = 0;
    int min = 1;
    int max = 100;
    srand(time(NULL));
    int randNum= rand() & (max - min +1) + min;
    
    printf("- Guessing Number Game -\n");

    do{
    printf("enter a number between (1-100): ");
    scanf("%d", &num);

    if(num > randNum){
        printf("Too High !");
    }else if(num < randNum){
        printf("Too Low!");
    }
    }
    
    while(num != randNum);
        printf("Correct! Well done the number is %d !", randNum);



    return 0;
}