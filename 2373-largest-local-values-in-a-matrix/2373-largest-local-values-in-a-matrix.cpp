class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
       vector<vector<int>> v;

        for(int i=0;i<=n-3;i++)
        {    vector<int>m1;
           for(int j=0;j<=n-3;j++)
           {   vector<int>m;
               for(int k=i;k<i+3;k++)
               {  
                   for(int l=j;l<j+3;l++)
                   {
                       m.push_back(grid[k][l]);
                   }
               
               }
             int max_val = INT_MIN;
            for (int val : m) {
                max_val = max(max_val, val);
            }
           m1.push_back(max_val);
           }
            v.push_back(m1);
        }
        return v;
        
    }
};