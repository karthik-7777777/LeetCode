class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int i=0;
        int chk=0;
        while(i<nums.size()-1){
            if(nums[i]<nums[i+1]){
                i++;
            }
            else{
                chk++;
                break;
            }
        }
        if(i==0 || i==nums.size()-1)return false;
        while(i<nums.size()-1){
            if(nums[i]>nums[i+1]){
                i++;
                
            }
            else{
                chk++;
                break;
            }
        }
        if(i==nums.size()-1)return false;
        while(i<nums.size()-1){
            if(nums[i]<nums[i+1]){
                i++;
            }
            else{
                chk++;
                break;
            }
        }
        if(chk==2 && i>=nums.size()-1){
            return true;
        }
        return false;
    }
};