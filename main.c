#include <stdio.h>

int main()
{
    int son1, son2, son3;
    printf("Sonlarni kiriting: ");
    scanf("%d%d%d", &son1, &son2, &son3);

    printf("Son1: %d. Son2: %d. Son3:  %d\n", son1,son2,son3);

    printf("Qoshilganda: %d\n", son1+son2+son3);

    return 0;
}
