#include<iostream>
#include<vector>
using namespace std;
void BubleSort(vector<int>& v)
{
	for (unsigned int i = 0; i < v.size() - 1; i++)
	{
		for (unsigned int j = 0; j < (v.size() - 1) - i; j++)
		{
			if (v[j] > v[j + 1])
				swap(v[j], v[j + 1]);
		}
	}

}
int main()
{
	vector<int> v;
	v.push_back(5);
	v.push_back(3);
	v.push_back(2);
	v.push_back(6);
	v.push_back(1);
	v.push_back(4);

	BubleSort(v);

	for (int i : v)
	{
		cout << i<<" ";
		
	}
	return 0;
	

}