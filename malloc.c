#include <stdio.h>
#include <stdlib.h>

int main(){

    int n=0;
    int op=0;
    printf("Enter how many Numbers you want to add:\n");
    scanf("%d", &n);
    int *p =  malloc(n*sizeof(int)); 
    //int *p =  calloc(n , sizeof(int)); create n integers and initialize them at zero (means it gives them the value 0)
    
    if(p==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Memory allocated well\n");

    printf("Your array is gonna be formed of %d.\nIf you want to edit it, (press 1 otherwise press any button)\n", n);
    scanf("%d", &op);
    if(op==1){
        printf("Reenter the amount of numbers:\n");
        scanf("%d", &n);
        int *temp=realloc(p, n * sizeof(int));
        if(temp==NULL){
            printf("Reallocation failed\n");
            free(p);
            return 1;
        }
        p=temp;
        printf("Reallocation succeeded\n");
    }
    printf("Your array is NOW gonna be formed of %d.\nNow enter data:\n", n);
    for(int i=0 ; i<n;i++){
        scanf("%d",&p[i]);
    }
    printf("Your Array:\n");
    for(int i= 0 ; i<n;i++){
        printf(" %d. ",p[i]);
    
    }
    free(p);
    return 0; 
}