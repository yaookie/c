#include <stdio.h>

int main()
{
	int arr[] = { 1, 23, 953, 123, 564, 70362 };
	int length = sizeof(arr) / sizeof(arr[0]);
	printf("���鳤��Ϊ��%d\n", length);
	for (int i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}