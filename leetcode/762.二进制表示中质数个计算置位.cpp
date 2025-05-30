/*
 * @lc app=leetcode.cn id=762 lang=cpp
 *
 * [762] 二进制表示中质数个计算置位
 */

// @lc code=start
class Solution
{
private:
    bool isPrime(int x)
    {
        if (x < 2)
        {
            return false;
        }
        for (int i = 2; i * i <= x; ++i)
        {
            if (x % i == 0)
            {
                return false;
            }
        }
        return true;
    }

public:
    int countPrimeSetBits(int left, int right)
    {
        int ans = 0;
        for(int x = left ; x<right ;x++){
            if(isPrime(__builtin_popcount(x))){
                ans++;
            }
        }

        return ans;
    }
};
// @lc code=end
