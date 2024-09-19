class Solution {
public:
    int hIndex(vector<int>& citations) {

        sort(citations.begin(),citations.end(),greater());
        int h_index=1;

        for(auto c:citations){
            cout<<c<<endl;
            if(c>=h_index){
                h_index++;
            }
            else{
                return h_index-1;
            }
        }
        
        return h_index-1;
    }
};