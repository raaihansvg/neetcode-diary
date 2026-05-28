using namespace std;
#include <string>
#include <iostream>
#include <bits/stdc++.h>

class Solution {
public:
    bool isPalindrome(string s) {

        string clean = "";

        for(char c : s){
            if(isalnum(c)){
                clean += tolower(c);
            }
        }

        string rvrs = clean;
        reverse(rvrs.begin(), rvrs.end());

        return rvrs == clean;
    }
};