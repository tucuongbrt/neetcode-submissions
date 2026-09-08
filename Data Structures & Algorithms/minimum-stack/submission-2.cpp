class MinStack {
public:
        stack<int> st;
        stack<int> mi;
    MinStack() {        
    }
    
    void push(int val) {
        st.push(val);
        if (mi.empty() || val <= mi.top()) {
            mi.push(val);
        }
        
    }
    
    void pop() {
        if (st.top() == mi.top()) {
            mi.pop();
        }
        st.pop();
    }
    
    int top() {
       return st.top();
        
    }
    
    int getMin() {
        return mi.top();
        
    }
};
