 #include <stdio.h>
 #include <string.h>

 int main(){

    int age=0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    printf("Enter your age:");
    scanf("%d", &age);

    getchar();
    printf("Enter your name:");
    fgets(name, sizeof(name), stdin); 
    name[strlen(name)-1] = '\0';

    printf("Enter your grade:");
    scanf(" %c", &grade);
    printf("Enter your gpa:");
    scanf("%f", &gpa);
    printf("Your age is: %d. Your name is: %s.\nGrade-gpa: %c %.1f", age, name, grade, gpa);
    //printf("%d %f %c %s", age, gpa, grade, name);

    return 0;
 }