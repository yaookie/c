#include <stdio.h>

int main(void)
{
	printf("Hello World\n");
	
	printf("%d+%d=%d\n", 12, 250, 12 +250);
	
	int a = 5;
	a = 5 + 5;
	const int i = 101; //����һ��������const���η�����ʾ���������ֵһ����ʼ���Ͳ������޸��� 
	printf("%d\t%d", a, i);
	
	int price = 0;
	printf("\n�������");
	scanf("%d", &price); //�����û�����
	printf("����%dԪ��\n", 100 - price);
	
	return 0;
}
