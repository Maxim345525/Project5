#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Input number: ";
	cin >> a;
	cout << "Input number: ";
	cin >> b;
	double sum = 0;
	int index = 0;
	for (int i = a; i <= b; i++) 
	{
		sum = sum + i;
		index++;
	}
	cout << "Summ: " << sum;
	return 0;
}