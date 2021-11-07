#include <iostream>
using namespace std;

int main()
{
	/*int a[5] = { 1, 2, 3, 4, 5 };
	unsigned total = 0;
	for (int j = 0; j < sizeof(a)/; j++)
	{
		total += a[j];
	}*/
	
	int a[20];
	for (int i = 0;i<20; i++)
	{
		a[i] = i;
	}
	cout << a << endl;
	system("pause");
	return 0;
}