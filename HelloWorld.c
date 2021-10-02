#include <stdio.h>

int main(void)
{
	printf("Hello World\n");
	
	printf("%d+%d=%d\n", 12, 250, 12 +250);
	
	int a = 5;
	a = 5 + 5;
	const int i = 101; //定义一个常量，const修饰符，表示这个变量的值一旦初始化就不能再修改了 
	printf("%d\t%d", a, i);
	
	int price = 0;
	printf("\n请输入金额：");
	scanf("%d", &price); //接收用户收入
	printf("找你%d元。\n", 100 - price);
	
	return 0;
}
