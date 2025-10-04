class Solution {
public:
    int minOperations(int n) {
        int s=0;
        for(int i=0;i<n;i++)
        {
            int x=(2*i)+1;
            s+=abs(x-n);
        }
        return s/2;
    }
};