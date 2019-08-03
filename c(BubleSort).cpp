#include<stdio.h>
void BubleSort(int arr[], int n)
{
	int i, j;
	int temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < (n - 1) - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}


int main()
{
	int i;
	int arr[6] = { 4,2,3,1,5,6 };

	BubleSort(arr, sizeof(arr) / sizeof(int));

	for (i = 0; i < 6; i++)
		printf("%d ",arr[i]);

	return 0;
}