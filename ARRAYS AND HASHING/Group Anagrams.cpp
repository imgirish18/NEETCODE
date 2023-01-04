class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> arr = strs;
        vector<vector<string>> res;
        for(int i=0; i<arr.size(); i++) {
            sort(arr[i].begin(), arr[i].end());
        }
        for(int i=0; i<arr.size(); i++) {
            vector<string> t;
            if(strs[i]!="A")
                t.push_back(strs[i]);
            for(int j=(i+1); j<arr.size(); j++) {
                if(arr[i]==arr[j] && strs[j]!="A") {
                    t.push_back(strs[j]);
                    strs[j]="A";
                }
            }
            if(t.size())
                res.push_back(t);
        }
        return res;
    }
};
