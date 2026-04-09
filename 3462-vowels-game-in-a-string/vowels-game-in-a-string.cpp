class Solution {
public:
    bool doesAliceWin(string s) {
        int vol=0;
        string vowel="aeiou";
        for(char ch:s){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')vol++;
        }
        if(vol==0)return false;
        return true;
    }
};