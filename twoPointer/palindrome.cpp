using namespace std;
#include <string>
#include <iostream>
#include <bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(string s) {
        string rvrs = s;
        reverse(rvrs.begin(), rvrs.end());
        if(rvrs == s){
            return true;
        }else{
            return false;
        }
    }
};
