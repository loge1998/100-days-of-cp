class LRUCache {
public:
    int capacity;
    list<pair<int,int>> dq;
    unordered_map<int,list<pair<int,int>>::iterator> map;
    LRUCache(int capacity) {
        this->capacity = capacity;
    }
    
    int get(int key) {
        if(map.find(key)!=map.end())
        {
            int value = (*map[key]).second;
            hit(key,value);
            return value;
        }
        else
            return -1;
    }
    
    void hit(int key,int value)
    {
        dq.erase(map[key]);
        dq.push_front({key,value});
        map[key]=dq.begin();        
    }
    
    void put(int key, int value) {
        if(map.find(key)==map.end())
        {
            if(dq.size()==this->capacity)
            {
                auto temp = dq.back();
                dq.pop_back();
                map.erase(temp.first);
            }
            dq.push_front({key,value});
            map[key]=dq.begin();
        }
        else
        {
            hit(key,value);
        }
    }
    

};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
