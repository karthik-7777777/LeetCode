class Solution {
public:
    int maxArea(vector<int>& height) {
        int front=0;
        int back=height.size()-1;
        int ans=INT_MIN;
        while(back>front)
        {
            ans=max(ans,(back-front)*min(height[front],height[back]));
            if(height[back]<height[front])
            {
                back--;
            }
            else
            {
                front++;
            }
        }
        return ans;
    }
};