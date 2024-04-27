#include <stdio.h>
#include <add.h>
/**
  * @brief  请输入范围在0～4294967295的自然数
  * @param  无
  * @retval 无
  */
unsigned int a, b, c, d;
int main()
{	
	unsigned int temp;
	printf("Input:\n");
	temp= add();
	printf("Output:\n");
	printf("%d",temp);
	return 0;
}