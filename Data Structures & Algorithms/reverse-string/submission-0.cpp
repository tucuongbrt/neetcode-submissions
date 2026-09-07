class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<int> save;
        for(char& c : s){
            save.push(c);
        }
        int i =0;
        while(!save.empty()){
            s[i++] = save.top();
            save.pop();
        }
    }
};