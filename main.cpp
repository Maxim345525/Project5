#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int	a = 1 + rand() % 100;

	int	b = 1 + rand() % 100;
	for (int i = 1; i <= 20; i++)
	{
		cout << "Input number" << endl;
		cin >> a; 
		if (a > 10 || a < 1)
		{
			cout << endl;
			cout << "Error";
			cout << endl;
			i = i - 1;
		}

		else {
			if (b == a) {
				cout << "You win";
				return 0;
			}
			else {
				cout << " not guess" << endl;

			}
		}
	
	
	
	
	
	}





}