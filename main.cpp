#include<iostream>
using namespace std;

void kursGr(double n1);
void kursRub(double n1);
void kursUSD(double n1);
void kursEUR(double n1);
int main()
{
    double n1;
    cout << "Enter CHislo\n";
    cin >> n1;
    cout << endl;
    cout << "Vibirite valyutu\n";
    int choice;
    cout << "1-Gr\n2-Rub\n3-USD\n4-EUR\n";
    cin >> choice;
    void (*pf[4])(double) = { kursGr,kursRub,kursUSD,kursEUR };
    for (int i = 0; i < 1; i++)
        pf[choice](n1);

}



void kursGr(double n1)
{
    cout << "V " << n1 << " Gr= " << endl;
    cout << n1 * 3.91 << " Rub" << endl;
    cout << n1 * 40 << " USD" << endl;
    cout << n1 * 41 << " EUR" << endl;

}
void kursRub(double n1)
{
    cout << "V " << n1 << " Rub= " << endl;
    cout << n1 * 0.5 << " Gr" << endl;
    cout << n1 * 0.032 << " USD" << endl;
    cout << n1 * 0.025 << " EUR" << endl;
}
void kursUSD(double n1)
{
    cout << "V " << n1 << " USD= " << endl;
    cout << n1 * 41 << " Gr" << endl;
    cout << n1 * 70 << " Rub" << endl;
    cout << n1 * 0.786 << " EUR" << endl;
}
void kursEUR(double n1)
{
    cout << "V " << n1 << " EUR= " << endl;
    cout << n1 * 40 << " Gr" << endl;
    cout << n1 * 75 << " Rub" << endl;
    cout << n1 * 1 << " USD" << endl;
}