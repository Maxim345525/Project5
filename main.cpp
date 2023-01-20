#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	setlocale(0, "");
	cout << "Guess the number" << endl;

	srand(time(0));
	int a = 1 + rand() % 500;

	int b = 1 + rand() % 500;
	
	for (int i = 1; i <= 200; i++)
	{
		cout << "Input number" << endl;
		cin >> a; 
		if (a > 500)
		{
			cout << endl;
			cout << "Error";
			cout << endl;
			i = i - 1;
		}

		else {
			if (b == a) {
				cout << "You win";
				return 10;
			}
			else {
				cout << " not guess" << endl;

			}
		}
	
		if (a == 0)
			break;
	
		if (b == 0)
			break;
	
	}
	




}