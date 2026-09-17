#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Student;

int main(){

    Student student1= {0};

    printf("Please fill in the following information: \n");
    printf("Enter your name:\n");
    fgets(student1.name, sizeof(student1.name),stdin);
    student1.name[sizeof(student1.name)-1]='\0';

    printf("Your age:\n");
    scanf("%d", &student1.age);
    printf("Your gpa:\n");
    scanf("%f", &student1.gpa);
    printf("Whether you are full time student or not (0. Yes - 1. No) : \n");
    int choice;
    scanf("%d", &choice);
    switch(choice){
        case 0:
            student1.isFullTime= true;
            break;
        case 1:
            student1.isFullTime= false;
            break;
        default:
            printf("Wrong choice! Retry...\n");
            break;
    }
    printf("\nName: %s\n", student1.name);
    printf("Age: %d\n",student1.age);
    printf("Gpa: %.2f\n",student1.gpa);
    printf("Full-time status: %s\n", (student1.isFullTime) ? "Yes": "No" );

    return 0;
}

