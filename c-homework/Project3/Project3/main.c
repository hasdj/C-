#include <stdio.h>
int main()
{
	int c;
	printf("输入一个字符: "); 
	scanf_s("%c", &c);
	printf("%c 的 ASCII 为 %d", c, c);
	return 0;
}


