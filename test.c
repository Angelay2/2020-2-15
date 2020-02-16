#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 100

// 杨氏矩阵
// 有一个二维数组, 数组的每行从左到右是递增的, 每列从上到下是递增的, 
// 在这样的数组中查找一个数字是否存在

// 切入点: 从右上 或者左下角
// 对于右上角而言 比我大 我往下走 / 比我小 我往左走
// 对于左下角而言 比我大 我往右走 / 比我小 我往上走

int yangSquare(int arr[][BUFFER_SIZE], int x, int y, int f){
	int i = 0, j = y - 1;
	// arr[i][j] 右上

	while (i < x && j >= 0){
		if (f > arr[i][j]){
			i++;
		}
		else if (f < arr[i][j]){
			j--;
		}
		else{
			return 1;// 等于
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





