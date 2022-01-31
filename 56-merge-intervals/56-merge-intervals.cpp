class Solution {
public:
    struct comp{
       bool operator()(const vector<int>& v1, const vector<int>&v2){
           return v1[0]<v2[0];
       } 
    };
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end(),comp());
        vector<vector<int>> res;
        
        res.push_back(intervals[0]);
        
        for(int i=1;i<intervals.size();i++){            
            if(intervals[i][0]>res.back()[1])
                res.push_back(intervals[i]);
            
            if(intervals[i][1]>res.back()[1])
                res.back()[1]=intervals[i][1];
        }
        
        return res;
        
    }
};