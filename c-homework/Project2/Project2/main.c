#include<stdio.h>
#include <math.h>
//
//int main()
//{
//	int  dividend=0,  divisor=0;//b������������
//	int Quotient=0;//��
//	int remainder = 0;//����
//	int temp = 0;
//	printf("���������뱻������������\n");
//	scanf_s("%d%d", &dividend, &divisor);
//	printf("���Ϊ��\n");
//	while (dividend - divisor >= 0)
//	{
//		dividend = dividend - divisor;
//		Quotient += 1;
//	}
//	//������������������ �� = ����
//	remainder = (dividend+ divisor * Quotient) - divisor * Quotient;
//	printf("%d\n", remainder);
//	printf("20222703315���\n");
//}




void divide(int  dividend, int  divisor) //������������
{
	int remainder;//����
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
	printf("20222703315���\n");
	return 0;
}