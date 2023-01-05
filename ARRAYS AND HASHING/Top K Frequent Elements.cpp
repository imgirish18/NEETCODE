class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }
        vector<int> ke, v;
        for(auto i: mp) {
            //cout << i.first << " " << i.second << endl;
            ke.push_back(i.first);
            v.push_back(i.second);
        }
        for(int i=0; i<ke.size(); i++) {
            for(int j=(i+1); j<ke.size(); j++) {
                if(v[i]<v[j]) {
                    int t = v[i];
                    v[i] = v[j];
                    v[j] = t;
                    t = ke[i];
                    ke[i] = ke[j];
                    ke[j] = t;
                }
            }
        }
       /* for(int i=0; i<ke.size(); i++) {
            cout << ke[i] << " ";
        }*/
        int i=0;
        vector<int> res;
        while(k--) {
            res.push_back(ke[i]);
            i++;
        }
        return res;
    }
};
