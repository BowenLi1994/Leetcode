class Solution {
public:
  
    struct sort_iv{       
        bool operator()(const vector<int>& v1, const vector<int>& v2){     
            return v1[0]<v2[0];
        }
    };
 
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        sort(intervals.begin(),intervals.end(),sort_iv());
        res.push_back(intervals[0]);
        
        int n=intervals.size();
        
        
        
//         for(auto v : intervals)
//             cout<<v[0]<<" "<<v[1]<<endl;
        
        for(int i=1;i<n;i++){
            
            //cout<<res.back()[0]<<" "<<res.back()[1]<<endl;
            
            if(intervals[i][0]>res.back()[1])
                res.push_back(intervals[i]);
            else if(intervals[i][1]> res.back()[1]){
                res.back()[1]=intervals[i][1];
                //cout<<"**"<<endl;
            }
            
        }
        
        return res;
    }
};