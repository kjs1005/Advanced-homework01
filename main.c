#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	char Eng[26],eng='a';
	int i,j;
	
	for(i=0;i<=25;i++)
	{
		Eng[i]='A'+i;
		printf("%c",Eng[i]);
	}
	
	printf("%\n");
	
	for(j=0;j<=25;j++)
	{
		printf("%c",eng);
		eng+=1;
	}
	
	printf("%\n");
	
	system("pause");
	return 0;
}
