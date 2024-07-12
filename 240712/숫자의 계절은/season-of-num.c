#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int m;
    scanf("%d", &m);
    switch(m)
    {
        case 3: case 4: case 5:
        {
            printf("Spring");
            break;
        }
        case 6: case 7: case 8:
        {
            printf("Summer");
            break;
        }
        case 9: case 10: case 11:
        {
            printf("Fall");
            break;
        }
        default:
            printf("Winter");
    }
    return 0;
}