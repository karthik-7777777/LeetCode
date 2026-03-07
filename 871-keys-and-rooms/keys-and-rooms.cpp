class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>adj(n,false);
        queue<int>q;
        q.push(0);
        adj[0]=true;
        while(q.size()){
            int room=q.front();
            q.pop();
            for(auto i:rooms[room]){
                if(!adj[i]){
                    adj[i]=true;
                    q.push(i);
                }
            }
        }
        for(auto i:adj){
            if(!i)return false;
        }
        return true;
    }
};