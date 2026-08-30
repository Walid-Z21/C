#include <stdio.h>
#include <stdbool.h>

int main(){
    /* %f : float 
       %lf : long float for double
       %d : decimal for int
       %c : single character
       %s : string - multi-character
       %b : boolean (include stdbool.h)
    */
    int age = 25;
    float gpa= 2.5;
    double pi= 3.14159265358979;
    char grade= 'A'; //use single quotation '...'
    char name[]= "falky";
    bool isOnline = true;
    char *status; //pointer
    char low[20];

    if(isOnline){
       status="online";
    }else{
        status="offline";
    }

    printf("I got %.2f gpa and I am %d years old. \nMeanwhile pi equals : %.4lf. \nIn addition I had an %c grade.\nForwardmore I'm %s.\nStatus : %s.", gpa, age, pi, grade, name, status);  

    printf("\n%s", low);
    
    return 0;
}