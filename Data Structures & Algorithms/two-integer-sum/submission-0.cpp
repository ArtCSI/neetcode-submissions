class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            int s=target-nums[i];
            if(mp.find(s)!=mp.end())
            {
                if(mp[s]<i)
                {
                    return {mp[s],i};
                }
                else
                {
                    return {i,mp[s]};
                }
            }
            else
            {
                mp[nums[i]]=i;
            }
        }
        return {};
    }
};
