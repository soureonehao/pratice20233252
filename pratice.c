#include<stdio.h>
void main() {
	int arr[10], i, arr1[10], j;	//��������������ۼӱ���
	printf("������10�����֣�");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);	//����ʮ����
	}
	i = 0;
	for (j = 9; j >= 0; j--){	
			arr1[j] = arr[i];
			i++;
	}
	printf("��ʮ�����ĵ����ǣ�");
	for (i = 0; i < 10; i++) {
		printf("%d ", arr1[i]);
	}
}