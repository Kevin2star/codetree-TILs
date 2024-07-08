#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char c[100];
    double a, b;
    scanf("%s", c);
    scanf("%lf %lf", &a, &b);
    printf("%s\n%.2lf\n%.2lf", c, a, b);
    return 0;
}