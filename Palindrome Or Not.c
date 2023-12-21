#include<stdio.h>
#include<string.h>

main()
{
	char string[100];
	int i,length,flag=0;
	
	printf("Enter String Value = ");
	gets(string);
	
	length = strlen(string);
	
	for(i=0 ; i<length/2 ; i++)
	{
		if(string[i]!=string[length-i-1])
		{
			flag = 1;
		}
		
	}
	if(flag)
	{
		printf("%s is not palindrome",string);
	}
	else
	{
		printf("%s is a palindrome",string);
	}
}