class Solution {
public:
int distance(vector<string>& garbage, vector<int>& travel, char c){
    int e=0;
    for(int i=garbage.size()-1;i>=0;i--)
    {
        if(garbage[i].find(c)!=string::npos)
        {
            e=i;
            break;
        }
    }
    int dis=0;
    for(int i=e-1;i>=0;i--)
    {
        dis+=travel[i];
    }
    return dis;
}
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int gc=distance(garbage,travel,'G');
        int mc=distance(garbage,travel,'M');
        int pc=distance(garbage,travel,'P');
        int gar=0;
        for(int i=0;i<garbage.size();i++)
        {
            gar+=garbage[i].size();
        }
        return gc+mc+pc+gar;
    }
};