#include <stdio.h>
int main()
{
    int d, m, y;
    printf("DD = Date, MM = Month, YYYY = Year\n");
    scanf("%d/%d/%d", &d,&m,&y);
    printf("Day _ %d, Month _ %d, Year _ %d", d, m, y);
    return 0;
}
