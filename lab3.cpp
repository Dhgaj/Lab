// 计算半径从1到10的圆面积，当面积大于100时结束循环，break使用范例
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    for (int r = 1; r <= 10; r++)
    {
        double area = M_PI * r * r;
        if (area > 100 || area < 0)
        {
            break;
        }
        cout << "半径为 " << r << " 的圆面积是 " << area << endl;
    }
    return 0;
}