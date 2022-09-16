#include <string>
#include "iostream"
#include "stack"
using namespace std;
class Solution
{
public:
    string intToRoman(int num)
    {
        string table[] = {"I", "IV", "V", "X", "L", "C", "D", "M"};
        stack<int> store;
        string ans = NULL;
        while (num)
        {
            store.push(num % 10);
            num /= 10;
        }
        while (!store.empty())
        {
            auto w = store.size(); //取得当前数字所在位数
            int t = store.top();
            switch (w)
            {
            case 1:

                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            default:
                break;
            }
            store.pop();
        }
    }
};
int main()
{
    int a = 0;
    string s = "hehe";
}