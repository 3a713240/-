#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 int year;
 printf("�п�J�褸�~��:");
 scanf("%d", &year);
 if(year%4==0)
 if(year%100==0 && year%400!=0)
 printf("�褸%d�~���O�|�~\n", year);
 else printf("�褸%d�~�O�|�~\n", year);
 else printf("�褸%d�~���O�|�~\n", year);
 system("pause");
 return 0;
}
