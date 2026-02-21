class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        bool isWrite = false;
        vector<vector<int>> ans;
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                int l=j+1;
                int r=n-1;
                int sum=target-nums[i]-nums[j];
                while(l<r) {
                    int total=nums[l]+nums[r];
                    if(total==sum) {
                        if (ans.size() == 0)
                            ans.push_back({nums[i],nums[j],nums[l],nums[r]});
                        else
                        {
                            for (size_t n = 0; n < ans.size(); n++)
                            {
                                if (nums[i] == ans[n][0] &&
                                    nums[j] == ans[n][1] &&
                                    nums[l] == ans[n][2] &&
                                    nums[r] == ans[n][3])
                                    {
                                        isWrite = true;
                                        break;
                                    }
                                else
                                        isWrite = false;
                            }
                            if (!isWrite)
                                ans.push_back({nums[i],nums[j],nums[l],nums[r]});
                        }
                        l++;
                        r--;
                        while(l<r && nums[l]==nums[l-1]) l++;
                        while(l<r && nums[r]==nums[r+1]) r--;
                    } else if(total>sum) {
                        r--;
                    } else {
                        l++;
                    }
                }
            }
        }
        return ans;
    }
};