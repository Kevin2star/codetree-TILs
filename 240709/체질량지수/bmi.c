#include <stdio.h>
#include <math.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int h, w;
    scanf("%d %d", &h, &w);
    double b=(double)w*10000/(h*h);
    printf("%.lf\n", floor(b));
    if(b>=25)
        printf("Obesity");
    return 0;
}