#include <stdio.h>

int main()
{
	FILE *fp;
	fp = fopen("test","r");
	char s;
	while((s=fgetc(fp))!=EOF)
	{
		printf("%.2x ",s);
	}
	printf("\n");
	return 0;
}
