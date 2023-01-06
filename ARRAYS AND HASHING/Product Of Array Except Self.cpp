class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int z_c=0, pr=1;
        vector<int> res(nums.size(), 0);
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]==0)
                z_c++;
            else
                pr*=nums[i];
        }
        if(z_c==1) {
            for(int i=0; i<nums.size(); i++) {
                if(nums[i]==0)
                    res[i] = pr;
            }
            return res;
        }
        if(z_c>1)
            return res;
        for(int i=0; i<nums.size(); i++) {
            res[i] = pr/nums[i];
        }
        return res;
    }
};
