#include <stdio.h>

//ð������

int main(void)
{
	int arr[] = { 846, 32, 54, 234, 86, 123, 98768, 263 }; //��������
	int length = sizeof(arr) / sizeof(arr[0]); //��ȡ���鳤��
	//���������������
	for (int i = 0; i < length; i++) {
		for (int j = i + 1; j < length; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i]; //������ʱ����������������
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	//�������������
	for (int i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}