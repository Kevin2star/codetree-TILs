#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    if((n<=7 && n%2!=0) || (n>7 && n%2==0))
        printf("31");
    else if(n==2)
        printf("28");
    else
        printf("30");
    return 0;
}