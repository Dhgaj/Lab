// 求出1-30之间所有偶数，练习continue语句
#include <iostream>
using namespace std;
// 程序执行到 continue 语句时，会停止执行循环体中剩下的代码
int main()
{
    int i;
    for (i = 1; i <= 30; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        cout << i << '\t';
    }
}
