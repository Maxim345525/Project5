#include<iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int main()
{

    system("chcp 1251 > null");
    int x, y;
    cout << "¬вед≥ть x: ";
    cin >> x;
    cout << "¬вед≥ть y: ";
    cin >> y;

    for (size_t i = x; i <= y; i++)
    {
        if (i % 7 == 0)
            cout << i << '\t';
    }
    cout << endl;
    return 0;
}