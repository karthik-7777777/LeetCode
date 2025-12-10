class Solution {
public:
    int countPermutations(vector<int>& complexity) {
        int lab0=complexity[0];
        int mini=*min_element(complexity.begin()+1,complexity.end());
        if(lab0>=mini)
        {
            return 0;
        }
        long long f=1;
        for(int i=2;i<complexity.size();i++)
        {
            f=(f*i)%1000000007;
        }
        return f;
    }
};