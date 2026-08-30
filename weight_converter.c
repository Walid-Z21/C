#include <stdio.h>
#include <math.h>

int main(){

    float initialWeight = 0.0f;
    float convertedWeight= 0.0f;
    char unit='\0';

    printf("- Weight converter program -\n");
    printf("choose the unit you want to convert to:\n");
    printf("1. KGs\n");
    printf("2. Pounds\n");
    scanf("%d", &unit);
    while(unit >2 || unit <1){
        printf("Unmatching number! Retry: ");
        scanf("%d", &unit);
    }
    if(unit==1){
        printf("Enter your weight in pounds:\n");
        scanf("%f", &initialWeight);
        convertedWeight=initialWeight*0.4535;
        printf("Your weight in pounds is %.2f. In Kgs it's: %.2f Kgs", initialWeight, convertedWeight);
    }
    else if(unit==2){
        printf("Enter your weight in Kgs:\n");
        scanf("%f", &initialWeight);
        convertedWeight=initialWeight*2.204;
        printf("Your kgs weight is %.2f. In pounds it's: %.2f pounds", initialWeight, convertedWeight);
    }

    return 0;
}