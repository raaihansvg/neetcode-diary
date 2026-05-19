#include<vector>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;

        for(string x : strs){
            string simpan = x;
            sort(simpan.begin(), simpan.end());
            map[simpan].push_back(x);
        }

        vector<vector<string>> hasil;
        for(auto x : map){
            hasil.push_back(x.second);
        }
        return hasil;
    }
};
