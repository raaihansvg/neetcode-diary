#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stak;

        for(char c : s){
            if(c == '(' || c == '[' || c == '{'){
                stak.push(c);
            }else{
                if(stak.empty()){
                    return false;
                }else{
                    char top = stak.top();
                    stak.pop();

                    if (c == ')' && top != '('){
                        return false;
                    }
                    if (c == '}' && top != '{'){
                        return false;
                    }
                    if (c == ']' && top != '['){
                        return false;
                    }
                }
            }
        }
    }
};
