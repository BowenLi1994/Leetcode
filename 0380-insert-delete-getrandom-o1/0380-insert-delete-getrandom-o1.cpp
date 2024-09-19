class RandomizedSet {
private:
    set<int> random_val;
public:
    RandomizedSet() {
        random_val.clear();
    }
    
    bool insert(int val) {
        if(random_val.count(val)){
            return false;
        }
        else{
            random_val.insert(val);
            return true;
        }      
    }
    
    bool remove(int val) {
        if(random_val.count(val)){
            random_val.erase(val);
            return true;
        }
        else{
            return false;
        }   
        
    }
    
    int getRandom() {
 return *next(random_val.begin(),rand()%random_val.size());
        // if(random_val.size()==1){
        //     return *random_val.begin();
        // }
        // srand(time(0));
        // int random_index=rand()/random_val.size();

        // auto it=random_val.begin();
        // advance(it, random_index);

        // return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */