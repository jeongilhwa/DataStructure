#include<stdio.h>
void InserSort(int arr[], int n)
{
	int i, j;
	int insdata;
	for (i = 1; i < n; i++)
	{
		insdata = arr[i];

		for (j = i - 1; j >= 0; j--)
		{
			if (arr[j] > insdata)
				arr[j + 1] = arr[j];
			else
				break;

		}
		arr[j + 1] = insdata;
	}
}

int main()
{
	int i;
	int arr[6] = { 4,2,5,3,1,6 };

	InserSort(arr, sizeof(arr) / sizeof(int));

	for (i = 0; i < 6; i++)
		printf("%d ", arr[i]);

	return 0;
}