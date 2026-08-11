# include<stdio.h>

int main() {

    int a;
    printf("Enter a number : ");
    scanf("%d", &a);

    printf("%d", a % 2 == 0); // Prints 1 if the number is divisible by 2, otherwise 0

    return 0;

}
