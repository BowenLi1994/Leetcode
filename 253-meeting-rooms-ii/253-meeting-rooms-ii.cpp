class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        
        priority_queue<int,vector<int>,greater<int>> start,end;
        
        for(auto iv:intervals){
            start.push(iv[0]);
            end.push(iv[1]);
        }
        
        int res=0,max_res=0;
        
        while(!start.empty()){
            
            if(start.top()<end.top()){
                res++;
                max_res=max(max_res,res);
                start.pop();
            }
            else{
                res--;
                end.pop();
            }
        }
        
        return max_res;
        
    }
};