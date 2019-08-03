#include<stdio.h>
void SelectSort(int arr[], int n)
{
	int i, j,temp;
	int idx;

	for (i = 0; i < n - 1; i++)
	{
		idx = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[idx] > arr[j])
				idx = j;
		}
		temp = arr[idx];
		arr[idx] = arr[i];
		arr[i] = temp;

	}
}
int main()
{
	int i;
	int arr[6] = { 5,2,4,1,3,6 };

	SelectSort(arr, sizeof(arr) / sizeof(int));

	for (i = 0; i < 6 ;i++)
		printf(" %d ", arr[i]);

	return 0;
}