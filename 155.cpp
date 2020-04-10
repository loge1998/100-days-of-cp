class MinStack {
public:
    /** initialize your data structure here. */
    stack<pair<int,unsigned int>>  st;
    long long int curMin;
    MinStack() {
        curMin = LLONG_MAX;
    }
    
    void push(int x) {
        if(!st.empty())
        {
            curMin = this->getMin();
            if(curMin > x)
                curMin = x;
            st.push({x,curMin});
        }
        else
            st.push({x,x});
        
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
