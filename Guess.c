#include <stdio.h>

#include <stdlib.h>
#include <time.h>

int  main(void)
{
	srand((unsigned int)time(NULL));
	int r = rand(); //�������ֵ
	int n; //�û������ֵ
	int count = 0;
	while (1) {
		scanf_s("%d", &n);
		if (n < r) {
			printf("��С�ˣ�\n");
		} else if (n > r) {
			printf("�´��ˣ�\n");
		}
		else {
			printf("�¶��ˣ�\n");
			break;
		}
		count++;
	}
	printf("�����%d�β���\n", count);
	return 0;
}