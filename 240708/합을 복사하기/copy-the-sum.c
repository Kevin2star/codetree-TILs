#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a=1, b=2, c=3, sum;
    sum=a+b+c;
    a=b=c=sum;
    printf("%d %d %d", a, b, c);
    return 0;
}