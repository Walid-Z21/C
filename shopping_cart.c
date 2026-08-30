#include <stdio.h>
#include <string.h>

float calculPrice(int amount, char item[]){
    if(strcmp(item,"pizza")==0){
        return amount*3.00f;
    }else if(strcmp(item,"burger")==0){
        return amount*2.49f;
    }else if(strcmp(item,"royal pizza")==0){
        return amount*4.99f;
    }
    return 0;
}

int main(){
    int amount = 0;
    float price = 0.0f;
    char item[30]= "";

    printf("Welcome to PizzaPlace.\nPlease Enter what item you'd like to buy?\n");
    fgets(item, sizeof(item), stdin);
    item[strlen(item)-1]='\0';
    while(strlen(item)==0){
        printf("Retry ");
        fgets(item, sizeof(item), stdin);
        item[strlen(item)-1]='\0';

    }

    printf("Cool!, Now how many of it you want? ");
    scanf("%d", &amount);
    price = calculPrice(amount,item);
    printf("you bought %d %s.\nTotal is: %.2f$", amount, item, price);
    return 0;
}

