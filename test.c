#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 100

// ���Ͼ���
// ��һ����ά����, �����ÿ�д������ǵ�����, ÿ�д��ϵ����ǵ�����, 
// �������������в���һ�������Ƿ����

// �����: ������ �������½�
// �������ϽǶ��� ���Ҵ� �������� / ����С ��������
// �������½Ƕ��� ���Ҵ� �������� / ����С ��������

int yangSquare(int arr[][BUFFER_SIZE], int x, int y, int f){
	int i = 0, j = y - 1;
	// arr[i][j] ����

	while (i < x && j >= 0){
		if (f > arr[i][j]){
			i++;
		}
		else if (f < arr[i][j]){
			j--;
		}
		else{
			return 1;// ����
		}
	}
	return 0;
}

int main(){
	int arr[BUFFER_SIZE][BUFFER_SIZE] = { { 1, 3, 5 },
					                      { 3, 5, 7 },
	                                      { 5, 7, 9 } };
	printf("%d\n",yangSquare(arr, 3, 3, 9));

	system("pause");
	return 0;
}





