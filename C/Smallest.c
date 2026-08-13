# include<stdio.h>

int main() {

    int a;
    printf("Enter a number : ");
    scanf("%d", &a);

    int b;
    printf("Enter another number : ");
    scanf("%d", &b);

    int c;
    printf("Enter one more number : ");
    scanf("%d", &c);

    if (a<b && a<c) {
        printf("%d is the smallest number", a);
    }

    else if (b<a && b<c) {
        printf("%d is the smallest number", b);
    }

    else {
        printf("%d is the smallest number", c);
    }
    

    return 0;
}
