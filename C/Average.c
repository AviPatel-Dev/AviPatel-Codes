# include<stdio.h>

int main() {

    int a;
    printf("enter a : ");
    scanf("%d", &a);

    int b;
    printf("enter b : ");
    scanf("%d", &b);

    int c;
    printf("enter c : ");
    scanf("%d", &c);

    printf("Average is : %d", (a+b+c)/3);
    return 0;
}