#include <stdio.h>
#include <stdlib.h>
int main(void)
{
float x,y,z,f;
printf("�п�Jx,y,z�T��:");
scanf("%f%f%f", &x, &y, &z);
f=5*x-y+3*z;
printf("%-10.2f\n", f);
system("pause");
return 0;
}
