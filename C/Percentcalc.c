# include<stdio.h>

int main() {

    float a; // a = Marks Obtained
    printf("Enter Marks obtained : ");
    scanf("%f", &a);

    float b; // b = Total Marks
    printf("Enter Total Marks : ");
    scanf("%f", &b);

    if ((a/b)*100>90 && (a/b)*100<=100) {
        printf("You got %f percentage \n", (a/b)*100 );
        printf("Congratulations , You got A+ Grade");
    }

    else if ((a/b)*100>80 && (a/b)*100<=90) {
        printf("You got %f percentage \n", (a/b)*100);
        printf("Congratulations , You got A Grade");
    }

    else if ((a/b)*100>75 && (a/b)*100<=80) {
        printf("You got %f percentage \n", (a/b)*100);
        printf("Congratulations , You cleared exam cutoff");
    }

    else if ((a/b)*100>=-100 && (a/b)*100<=75){
        printf("You got %f percentage \n", (a/b)*100);
        printf("Oops , You failed to clear the exam");
    }

    else if ((a/b)*100>100) {
        printf("Invalid Input \nObtained Marks cannot be greater than Total Marks");
    }

    return 0;
    
}