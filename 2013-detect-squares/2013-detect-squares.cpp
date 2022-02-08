class DetectSquares {
public:
    DetectSquares() {
        cnt.resize(1001,vector<int>(1001,0));
    }
    
    void add(vector<int> point) {
        int x=point[0], y=point[1];
        cnt[x][y]++;
        points.emplace_back(x,y);
    }
    
    int count(vector<int> point) {
        int res=0;
        
        int px=point[0], py=point[1];
        for(auto [x,y] :points ){
            if(px==x||py==y||abs(px-x)!=abs(py-y)) continue;
            int cnt1=cnt[x][py];
            int cnt2=cnt[px][y];
            res+=cnt1*cnt2;
        }
        return res;
        
    }
private:
    vector<vector<int>> cnt;
    vector<pair<int,int>> points;
};

/**
 * Your DetectSquares object will be instantiated and called as such:
 * DetectSquares* obj = new DetectSquares();
 * obj->add(point);
 * int param_2 = obj->count(point);
 */