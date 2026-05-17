#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        vector<int> angkaUnik(n);
        vector<int> hitung(n);
        vector<int> hasil(k);

        int ukuran = 0;
        int jumlah = 1;

        for (int i = 1; i < n; i ++){
            if (nums[i] == nums[i - 1]){
                jumlah ++;
            }else{
                angkaUnik[ukuran] = nums[i - 1];
                hitung[ukuran] = jumlah;
                ukuran ++;
                jumlah = 1;
            }
        }
        angkaUnik[ukuran] = nums[n - 1];
        hitung[ukuran] = jumlah;
        ukuran ++;

        for(int a = 0; a < k; a ++){
            int maxIndex = 0;
            for(int b = 1; b < ukuran; b ++){
                if (hitung[b] > hitung[maxIndex]){
                    maxIndex = b;
                }
            }

            hasil[a] = angkaUnik[maxIndex];
            hitung[maxIndex] = -1;
        }
        return hasil;
        
    }
};
