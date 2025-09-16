class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>arr;
        int x=0,y=0;
        // arr.push_back(pref[0]);
        for(int i=0;i<pref.size();i++)
        {
            x=y^pref[i];
            arr.push_back(x);
            y=y^arr[i];
        }
        return arr;
    }
};