class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        // n=1 -> 9
        // n=2 -> 9 x 9 + sum of above
        // n=3 -> 9 x 9 x 8 + sum of above
        // n=4 -> 9 x 9 x 8 x 7 + sum of above
        int ans = 1;
        for(int i=1;i<=n;i++)
        {
           int multi = 9;
           for(int j=1;j<i;j++)
           {
                multi = multi * (10-j);
           }
           ans= ans + multi;
        }
        return ans;
    }
};