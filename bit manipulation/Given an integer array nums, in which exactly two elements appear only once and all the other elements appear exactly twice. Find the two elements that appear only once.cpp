class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long int rem2 = 0;
        for(int n:nums)
        {
            rem2 ^=n;
        }

 int last1 = rem2 & (-rem2); //int last1 = rem2 & -(rem2-1);//both true

        vector<int>ans = {0,0};

        for(int n:nums)
        {
            if((last1 & n) ==0)
            ans[0] = ans[0]^n;//putting in different group and then xor all= xor all when comming 
            else
            ans[1] = ans[1]^n;
        }
        return ans;
        
    }
};
