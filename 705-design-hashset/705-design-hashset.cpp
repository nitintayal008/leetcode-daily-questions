class MyHashSet {
    
    vector<bool> ans;
public:
    MyHashSet() {
        
        // max possible value of key is 10^6 so array should be of length 10^6 + 1 
        ans.resize(1e6+1,false);
    }
    
	// change presence of K th value of array to add or remove from hashset
	
    void add(int key) {
        ans[key] = true;
    }
    
    void remove(int key) {
        ans[key]=false;
    }
    
	// to check if present just return it's value at K th position
    bool contains(int key) {
        return ans[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */