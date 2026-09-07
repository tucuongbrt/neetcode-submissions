class Solution {
public:
    bool isValid(string s) {
        stack<char> save;
        for(char& c : s){
            if(c=='{' || c== '[' || c == '('){
                save.push(c);
            } else {
                if(save.empty()){
                    return false;
                }
                if(c == '}' && save.top() != '{') return false;
                if(c == ']' && save.top() != '[') return false;
                if(c == ')' && save.top() != '(') return false;
                save.pop();
            }
        }
         return  save.empty();
    }
};
