#include<stdio.h>
void main()
{
	int a,b,c;
	printf("ENTER YOUR NUMBER");
	scanf("%d%d%d",&a,&b,&c);
	  if((a>b)&&(a>c))
        printf("a is the largest number", a);
         else if( (b>a)&&(b>c))
         printf("b is the largest number", b);
       else
         printf(" c is the largest number");
     }
