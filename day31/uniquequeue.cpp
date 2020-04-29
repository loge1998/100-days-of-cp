class FirstUnique {
public:
    list<int> uniq;
    map<int,pair<int,list<int>::iterator>> m;
    FirstUnique(vector<int>& nums) {

        for(int temp :nums)
        {
            add(temp);
        }
    }
    
    int showFirstUnique() {
        if(uniq.size()>0)
            return uniq.back();
        else
            return -1;
    }
    
    void add(int value) {
        if(m.find(value)==m.end())
        {
            uniq.push_front(value);
            m[value] = {1,uniq.begin()};
        }
        else
        {
            auto temp = m[value];
            if(temp.first>0)
            {
                m[value].first = 0;
                uniq.erase(temp.second);
            }
        }      
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */
