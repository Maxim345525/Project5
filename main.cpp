#include<iostream>
using namespace std;
int main()
{
	int n;
	int   sum = 0; 
	for(;;)
	{ 
		cout << "Input number -->";
		cin >> n;
		if (n == 0)
		break;
		else
		sum += n;
	}
	cout << "Summ = " << sum << endl;
	system("pause");
	return 0;
}