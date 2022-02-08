class StockPrice {
public:
    StockPrice() {
        
    }
    
    void update(int timestamp, int price) {
       if(m.count(timestamp)){
           //cout<<"deleting: "<<m[timestamp]<<endl;
           val.erase(val.find(m[timestamp]));
       }
        m[timestamp]=price;
        val.insert(price);
        
        // for(auto kv: m)
        //     cout<<kv.first<<"--->"<<kv.second<<endl;
        //  cout<<"----------------------"<<endl;
        // for(auto v:val)
        //     cout<<v<<" ";
        // cout<<endl;
        //   cout<<"----------------------"<<endl;
    }
    
    int current() {
        return m.rbegin()->second;
    }
    
    int maximum() {
        return *val.begin();
    }
    
    int minimum() {
        return *val.rbegin();
    }

private:
    map<int,int>m;
    multiset<int,greater<int>> val;
};

/**
 * Your StockPrice object will be instantiated and called as such:
 * StockPrice* obj = new StockPrice();
 * obj->update(timestamp,price);
 * int param_2 = obj->current();
 * int param_3 = obj->maximum();
 * int param_4 = obj->minimum();
 */