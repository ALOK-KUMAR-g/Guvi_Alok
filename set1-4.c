#include<stdio.h>
void main()
{
char s;

printf("ENTER YOUR CHARACTER");
scanf("%c",&s);
if ((s>='a'&&s<='z')||(s>='A'&&s<='Z'))
printf("%c is alphabet",s);
else
printf("%c is not alphabet");
}
