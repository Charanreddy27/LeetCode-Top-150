class RandomizedSet {
public:
    unordered_map<int, int> m;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(m.find(val) != m.end()) return false;
        m[val] = 1;
        return true;
    }
    
    bool remove(int val) {
        if(m.find(val) == m.end()) return false;
        m.erase(val);
        return true;
    }
    
    int getRandom() {
        auto it = m.begin();
        advance(it, rand() % m.size()); //randomly increment it within range of map size
        return it->first;    
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */