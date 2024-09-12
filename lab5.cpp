// 分析“白鸡问题”
// 公元五世纪,张丘建在《算经》中提出:鸡翁一值钱五,鸡母一值钱三,鸡雏三值一钱。凡百钱买百鸡,问鸡翁、鸡母、鸡雏各几何？
// 请编写程序计算并显示100元钱买100只鸡的所有可能。
// 提示:
// 1、 要穷举鸡翁鸡母的所有可能性,必须对cock、hen做双层循环;
// 2、 鸡雏的数量可从100 - cock - hen求出,不必对chick再做循环;
// 3、 鸡翁的数量不能超过19,鸡母数量不能超过33,否则不符合要求;
// 4、 在满足cock + hen + chick = 100的条件下,满足:5 *cock + 3 *hen + chick / 3 = 100;
// 5、 需考虑小数,四舍五入,总钱数不超过100。
#include <iostream>
using namespace std;

int main()
{
    int cock, hen, chick;
    for (cock = 0; cock < 20; cock++)
    {
        for (hen = 0; hen <= 33; hen++)
        {
            chick = 100 - cock - hen;
            if (chick % 3 == 0 && 5 * cock + 3 * hen + chick / 3 == 100)
            {
                cout << cock << '\t' << hen << '\t' << chick << endl;
            }
        }
    }
}