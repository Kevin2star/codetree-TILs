#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int fa, sa;
    char fs, ss;
    scanf("%d %c %d %c", &fa, &fs, &sa, &ss);
    if((fa>=19 && fs=='M') || (sa>=19 && ss=='M'))
        printf("1");
    else
        printf("0");
    return 0;
}