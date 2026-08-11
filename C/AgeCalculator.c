# include<stdio.h>

int main() {

    int birth_year;
    printf("Enter your birth year : ");
    scanf("%d", &birth_year);

    int current_year;
    printf("Enter the current year : ");
    scanf("%d", &current_year);

    printf("Your age is : %d", current_year - birth_year);
    
    return 0;

}