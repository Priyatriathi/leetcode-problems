class Solution {
public:

  int maximumEnergy(vector<int>& energy, int k){
        int n = energy.size(), ans = INT_MIN;
        for(int j = n - k - 1; j >= 0; j--){
            energy[j] += energy[j + k];
        }
        for(int i = 0; i < n; i++){
            ans = max(ans, energy[i]);
        }
        return ans;
    }
};