#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char s[100], t[100];
    char temp[100];
    scanf("%s %s", s, t);
    for(int i=0; i<100; i++)
        temp[i]=s[i];
    for(int i=0; i<100; i++)
        s[i]=t[i];
    for(int i=0; i<100; i++)
        t[i]=temp[i];
    printf("%s\n%s", s, t);
    return 0;
}