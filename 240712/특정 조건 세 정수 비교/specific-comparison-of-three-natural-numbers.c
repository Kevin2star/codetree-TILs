#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int min=100;
    if(a<min)
        min=a;
    if(b<min)
        min=b;
    if(c<min)
        min=c;
    if(a==min)
        printf("1 ");
    else
        printf("0 ");
    if(a==b && b==c)
        printf("1");
    else
        printf("0");
    return 0;
}