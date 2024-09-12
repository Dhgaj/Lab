#include <iostream>
using namespace std;

void A(int n);
void B(int n);
void C(int n);

int main()
{
    int n;
    // cout << "Please input n: ";
    // cin >> n;
    n = 3;
    A(n);
    B(n);
    C(n);
    return 0;
}

void A(int n)
{
    int i = n;
    while (i != 1)
    {
        n *= (i - 1);
        i--;
    }
    cout << "while:     n! = " << n << endl;
}

void B(int n)
{
    int i = n;
    while (i != 1)
    {
        n *= (i - 1);
        i--;
    }
    cout << "do-while:  n! = " << n << endl;
}
void C(int n)
{
    int i = n;
    while (i != 1)
    {
        n *= (i - 1);
        i--;
    }
    cout << "for:       n! = " << n << endl;
}