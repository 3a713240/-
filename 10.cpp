#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 int integer;
 printf("�п�J�@�Ӥj��0�����:");
 scanf("%d", &integer);
 if(integer>0)
 if(integer%2!=0)
 printf("�z��J���ƭȬ��_��\n");
 else
 printf("�z��J���ƭȬ�����\n");
 else
 printf("�z��J���Ȥp�󵥩�0\n");
 system("pause");
 return 0;
}
