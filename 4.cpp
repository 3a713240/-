#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 int i, n;
 float total=0.0;
 printf("?D?e?J?@-O?a?A:");
 scanf(" %d",&n);
 for(i=1; i<=n; i++)
 {
 	total+=1.0/i;
 	printf("1/%d+",i);
 }
 printf("\b A`cM?¢X=%7.4f\n", total);
 system("pause");
 return 0;
}
