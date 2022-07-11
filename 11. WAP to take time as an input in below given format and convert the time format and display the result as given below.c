#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter hour and minutes\nHH:MM\n");
    scanf("%d%d", &x, &y);
    printf("%d Hour and %d Minutes", x, y);
    return 0;
}