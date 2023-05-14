#include "inout.h"
void print(const vector<int> &vec)
{
	cout << "vec = [ ";
	for (int i = 0; i< vec.size() ; i++)
	{
		cout <<vec[i] << " ";
	}
	cout << "]";
}
