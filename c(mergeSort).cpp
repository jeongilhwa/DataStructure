#include<stdio.h>
void Merge(int arr[], int left, int mid, int right)
{
	int i = left;
	int j = mid + 1;
	int k, temp[50];
	int t = left;

	while (i <= mid && j <= right)
	{
		if (arr[i] < arr[j])
		{
			temp[t] = arr[i];
			t++;
			i++;
		}
		else
		{
			temp[t] = arr[j];
			t++;
			j++;
		}
	}
	while (i <= mid)
	{
		temp[t] = arr[i];
		t++;
		i++;
	}
	while (j <= right)
	{
		temp[t] = arr[j];
		t++;
		j++;
	}
	for (k = left; k <= right; k++)
		arr[k] = temp[k];
}

void MergeSort(int arr[], int left, int right)
{
	int mid;

	if (left < right)
	{
		mid = (left + right) / 2;

		MergeSort(arr, left, mid);
		MergeSort(arr, mid + 1, right);

		Merge(arr, left, mid, right);
	}
}
int main()
{
	int i;
	int arr[6] = { 4,2,5,3,1,6 };

	MergeSort(arr, 0, sizeof(arr) / sizeof(int) - 1);

	for (i = 0; i < 6; i++)
		printf("%d ", arr[i]);

	return 0;
}
