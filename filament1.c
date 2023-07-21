#include<stdio.h>
#include<string.h>

main()
{
	char a[100],b[100];
	
	printf("  Enter string = ");
	gets(a);
	strcpy(b,a);
	
	printf("  revers string is : %s",strrev(a));
	
	if(strcmp(a,b) == 0)
	{
		printf("\n number is  Palindrom");
	}
	else
	{
		printf("\n number is  Not Palindrom");
	}
}
