class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end(),greater());
        int hIndex = 0;
        for(int i=0;i<citations.size();i++){
            if(citations[i]<i+1)
                break;
            hIndex = i+1;
        }
        return hIndex;
    }
};