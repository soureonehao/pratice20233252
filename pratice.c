#include<stdio.h>
void main() {
	int arr[10], i, arr1[10], j;	//定义数组变量，累加变量
	printf("请输入10个数字：");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);	//输入十个数
	}
	i = 0;
	for (j = 9; j >= 0; j--){	
			arr1[j] = arr[i];
			i++;
	}
	printf("这十个数的倒序是：");
	for (i = 0; i < 10; i++) {
		printf("%d ", arr1[i]);
	}
}