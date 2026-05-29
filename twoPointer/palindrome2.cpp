#include <string>
#include <iostream>
#include <cctype>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s){
        for (char &c : s){
            c = tolower(c);
        }

        string bersih = "";

        for (char c : s){
            if (isalpha(c)){
                bersih += c;
            }
        }

        string balik = bersih;
        reverse(balik.begin(), balik.end());
        
        return balik == bersih;

    } 
};