#include<stdio.h>
int main()
{
    char date[7][4]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
    int mon[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int month,day, resday=0;
    scanf("%d %d",&month, &day);
    for(int i=1;i<month;i++)
        resday+=mon[i];
    resday+=day;
    printf("%s\n", date[resday%7]);
    return 0;
}

