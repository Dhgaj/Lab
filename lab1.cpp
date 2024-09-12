// 用 while do-while for 循环求1~100的和
#include <iostream>
using namespace std;

void A(int n);
void B(int n);
void C(int n);

int main()
{
    int n = 100;
    A(n);
    B(n);
    C(n);
    return 0;
}

void A(int n)
{
    int sum = 0;
    int i = 1;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << "while: " << "    " << sum << endl;
}

void B(int n)
{
    int sum = 0;
    int i = 1;
    do
    {
        sum += i;
        i++;
    } while (i <= n);
    cout << "do-while: " << " " << sum << endl;
}

void C(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "for: " << "      " << sum << endl;
}