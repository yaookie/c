#include <stdio.h>

//冒泡排序

int main(void)
{
	int arr[] = { 846, 32, 54, 234, 86, 123, 98768, 263 }; //定义数组
	int length = sizeof(arr) / sizeof(arr[0]); //获取数组长度
	//遍历数组进行排序
	for (int i = 0; i < length; i++) {
		for (int j = i + 1; j < length; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i]; //定义临时变量交换两个变量
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	//输出排序后的数组
	for (int i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}