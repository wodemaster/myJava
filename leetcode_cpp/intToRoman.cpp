#include <string>
#include "iostream"
#include "stack"
using namespace std;
pair<char, int> p[] = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}};
int findval(pair<char, int> p[], char s)
{
    for (int i = 0;; i++)
    {
        if (p[i].first == s)
        {
            return p[i].second;
        }
    }
}
class Solution
{
public:
    static int romanToInt(string s)
    {
        int pre = -1;
        int ans = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            int val = findval(p, s.at(i));
            if (val < pre)
                ans -= val;
            else
                ans += val;
            pre = val;
        }
        return ans;
    }
};
int main()
{
    cout << Solution::romanToInt("LVIII") << endl;
}