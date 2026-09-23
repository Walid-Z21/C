#include <stdio.h>

int main (){

    int x=10;

    FILE *file= fopen("filec.txt", "a");

    if(file == NULL){
        printf("Could not open file!");
        return 1;
    }

    fprintf(file,"Hello i got %d bucks!\n", x);
    
    FILE *file2= fopen("filec.txt", "r");
    char line[100];
    if(file2 == NULL){
        printf("Could not open file!");
        return 1;
    }

    while(fgets(line, sizeof(line), file2)!= NULL){;
        printf("%s", line);
    }

    fclose(file2);

    return 0;
}