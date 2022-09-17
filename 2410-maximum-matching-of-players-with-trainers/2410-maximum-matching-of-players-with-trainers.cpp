class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        priority_queue<int>st1;
        priority_queue<int>st2;
        sort(players.begin(),players.end(),greater<int>());
        for(int i=0;i<players.size();i++)
        {
            st1.push(players[i]);
        }
           for(int i=0;i<trainers.size();i++)
        {
            st2.push(trainers[i]);
        }
        
        int ans=0;
        while(1)
        {
        
            if(st2.empty()||st1.empty())
            {
            break;
            }
           if(st1.top()>st2.top())
           {
               st1.pop();
           }
            else if(st1.top()<=st2.top())
            {
                ans++;
                st1.pop();
                st2.pop();
            }
        }    
        return ans;
        
    }
};