#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 int coin;
 int ten, five, one;
 int thousand, hundred;
 printf("�п�J�Q��w�����X��?:");
 scanf("%d", &ten);
 printf("�п�J����w�����X��?:");
 scanf("%d", &five);
 printf("�п�J����w�����X��?:");
 scanf("%d", &one);
 coin=10*ten+5*five+1*one;
 printf("\n�`�@���z %d���w��\n", coin);
 printf("�n�����z�d���r�� %d�i\n", thousand=coin/1000);
 printf("�n�����z�ʤ��r�� %d�i\n", hundred=coin%1000/100);
 printf("�����ʤ����s���h���z %d��\n", coin%1000%100);
 system("pause");
 return 0;
}

