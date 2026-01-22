class Solution {
public:
void bin(int n,string str,vector<string>&ans){
    if(str.size()==n){
        ans.push_back(str);
        return;
    }
    bin(n,str+"1",ans);
    if(str.size()==0 || str.back()!='0'){
        bin(n,str+"0",ans);
    }
}
    vector<string> validStrings(int n) {
        vector<string>ans;
        bin(n,"",ans);
        return ans;
    }
};