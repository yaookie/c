#include <stdio.h>

#include <stdlib.h>
#include <time.h>

int  main(void)
{
	srand((unsigned int)time(NULL));
	int r = rand(); //随机数的值
	int n; //用户输入的值
	int count = 0;
	while (1) {
		scanf_s("%d", &n);
		if (n < r) {
			printf("猜小了！\n");
		} else if (n > r) {
			printf("猜大了！\n");
		}
		else {
			printf("猜对了！\n");
			break;
		}
		count++;
	}
	printf("你猜了%d次猜中\n", count);
	return 0;
}