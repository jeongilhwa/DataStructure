#include<stdio.h>
void swap(int arr[], int idx1, int idx2)
{
	int temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
}

int partition(int arr[], int left, int right)
{
	int pivot = arr[left];
	int low = left + 1;
	int high = right;

	while (low <= high)
	{

		while (pivot > arr[low])
			low++;

		while (pivot < arr[high])
			high--;

		if (low <= high)
			swap(arr, low, high);
	}
	swap(arr, left, high);
	return high;

}
void QuickSort(int arr[], int left, int right)
{
	int pivot;

	if (left <= right)
	{
		pivot = partition(arr, left, right);

		QuickSort(arr, left, pivot - 1);
		QuickSort(arr, pivot + 1, right);
	}
}

int main()
{
	int i;
	int arr[6] = { 4,2,5,3,1,6 };

	QuickSort(arr, 0, sizeof(arr) / sizeof(int) - 1);

	for (i = 0; i < 6; i++)
		printf("%d ", arr[i]);

	return 0;
}
