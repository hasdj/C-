#include <stdio.h>
#include <add.h>
/**
  * @brief  �����뷶Χ��0��4294967295����Ȼ��
  * @param  ��
  * @retval ��
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