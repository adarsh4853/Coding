class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        map<int,int> mpp;
        int count1=0,count2=0;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        for(const auto &i : mpp)
        {
            count1=0;
            for(const auto &j : mpp)
            {
                if((i.first-j.first)<=k && (i.first-j.first)>=0)
                {
                    count1++;
                }
            }
            count2=max(count1,count2);
        }
    return count2;
    }
};