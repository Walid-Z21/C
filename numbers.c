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
    int tries = 1;
    srand(time(NULL));
    int randNum= rand() & (max - min +1) + min;
    
    printf("- Guessing Number Game -\n");

    do{
    printf("enter a number between (1-100): ");
    scanf("%d", &num);

    if(num > randNum){
        printf("Too High ! Retry->\n");
        tries++;
    }else if(num < randNum){
        printf("Too Low ! Retry->\n");
        tries++;
    }
    }while(num != randNum);

        printf("Correct! Well done the number is %d !\n", randNum);
        if(tries<8){
        printf("cYou WON!\nYou done %d attempts", tries);
        }else{
            printf("Too much attempts! You lost for making over 8 failed attempts!\nYou done %d attempts!", tries);
        }



    return 0;
}