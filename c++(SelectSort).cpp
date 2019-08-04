#include<iostream>
#include<vector>
using namespace std;
void SelectSort(vector<int>& v)
{
	for (unsigned int i = 0; i < v.size(); i++)
	{
		for (unsigned int j = i + 1; j < v.size(); j++)
		{
			if (v[i] > v[j])
			{
				swap(v[i], v[j]);
			}
		}

	}
}

int main()
{
	vector<int> v;

	v.push_back(3);
	v.push_back(1);
	v.push_back(5);
	v.push_back(2);
	v.push_back(6);
	v.push_back(4);

	SelectSort(v);

	for (int i : v)
	{
		cout << i << " ";
	}
	return 0;
}