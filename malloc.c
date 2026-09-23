#include <stdio.h>
#include <stdlib.h>

int main(){

    int n=0;

    printf("Enter how many Numbers you want to add:\n");
    scanf("%d", &n);
    int *p =  malloc(n*sizeof(int));
    
    if(p==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Memory allocated well\n");

    printf("Your array is gonna be formed of %d.\nEnter its data:\n", n);
    
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