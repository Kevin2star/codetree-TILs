#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int Am, Ae, Bm, Be;
    scanf("%d %d %d %d", &Am, &Ae, &Bm, &Be);
    if(Am>Bm && Ae>Be)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}