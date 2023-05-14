#include "inout.h"
void read(vector<int>& vec)
{
	int n;
	int m;
	cout << "Lenght=";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "C[" << i+1   << "]=";
		cin >> m;
		vec.push_back(m);
	}
}