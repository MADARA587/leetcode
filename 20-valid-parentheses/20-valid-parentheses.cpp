class Solution {
public:
    bool isValid(string s) {
        stack <char> as;
        int len  = s.length();
        for(int i = 0;i<len;i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                as.push(s[i]);
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
                if(as.empty())
                    return false;
                else if(s[i] == ')' && as.top()!='(')
                    return false;
                else if(s[i] == '}' && as.top()!='{')
                    return false;
                else if(s[i] == ']' && as.top()!='[')
                    return false;
                else 
                    as.pop();
            }
        }
        if(as.empty())
            return true;
        else
            return false;
    }
};