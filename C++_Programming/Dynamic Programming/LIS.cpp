#include <bits/stdc++.h>
using namespace std;

// Binary search solution
int lengthOfLIS(vector<int> &nums)
{
    int n = nums.size(), ans = 1;
    vector<int> tail(n, 0);
    tail[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (tail[ans - 1] < nums[i])
        {
            tail[ans] = nums[i];
            ans++;
        }
        else
        {
            auto it = lower_bound(tail.begin(), tail.begin() + ans, nums[i]);
            *it = nums[i];
        }
    }
    return ans;
}

// Normal dp solution
int lengthOfLIS(vector<int> &nums)
{
    int n = nums.size();
    vector<int> lis(n);
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (nums[j] < nums[i])
                lis[i] = max(lis[i], lis[j] + 1);
        }
        res = max(res, lis[i]);
    }
    return res;
}

int main()
{

    return 0;
}