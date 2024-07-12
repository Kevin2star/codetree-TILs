#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char fs, ss, ts;
    int ft, st, tt;
    scanf("%c %d %c %d %c %d", &fs, &ft, &ss, &st, &ts, &tt);
    int count=0;
    if(fs=='Y' && ft>=37)
        count+=1;
    if(ss=='Y' && st>=37)
        count+=1;
    if(ts=='Y' && tt>=37)
        count+=1;
    if(count>=2)
        printf("E");
    else
        printf("N");
    return 0;
}