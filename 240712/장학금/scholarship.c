#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int midscore, finscore;
    scanf("%d %d", &midscore, &finscore);
    if(midscore>=90)
    {
        if(finscore>=95)
            printf("100000");
        else if(finscore>=90)
            printf("50000");
        else
            printf("0");
    }
    else
        printf("0");
    return 0;
}