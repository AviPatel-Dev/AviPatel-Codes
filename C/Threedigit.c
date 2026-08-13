# include<stdio.h>

int main () {

    int x;
    printf("Enter a number : ");
    scanf("%d", &x);

    printf("%d", x>99 && x<1000);
    return 0;
}