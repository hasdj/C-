#include<stdio.h>
#include <math.h>
//
//int main()
//{
//	int  dividend=0,  divisor=0;//b被除数，除数
//	int Quotient=0;//商
//	int remainder = 0;//余数
//	int temp = 0;
//	printf("请依次输入被除数，除数：\n");
//	scanf_s("%d%d", &dividend, &divisor);
//	printf("结果为：\n");
//	while (dividend - divisor >= 0)
//	{
//		dividend = dividend - divisor;
//		Quotient += 1;
//	}
//	//（被除数－余数）÷ 商 = 除数
//	remainder = (dividend+ divisor * Quotient) - divisor * Quotient;
//	printf("%d\n", remainder);
//	printf("20222703315刘宇东\n");
//}




void divide(int  dividend, int  divisor) //被除数，除数
{
	int remainder;//余数
	if (divisor == 0)
	{
		printf("Error  divisor  cannot  be  zero.");

	}
	else {
		int temp = 0;
		while (dividend > divisor)
		{
			dividend = dividend - divisor;
			remainder = dividend;
		}printf("%d\n", remainder);
	}
}
int main()
{
	divide(10, 3);
	printf("20222703315刘宇东\n");
	return 0;
}