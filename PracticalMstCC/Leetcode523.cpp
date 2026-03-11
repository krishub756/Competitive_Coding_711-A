class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>pre(n);
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i];
        }
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp.find(pre[i]%k)==mp.end()){
                mp[pre[i]%k]=i;
            }
        }
        for(int i=1;i<n;i++){
            if(pre[i]%k==0){
                return true;
            }else{
                int m=pre[i]%k;
                int ind=mp[m];
                if(ind!=-1 && i-ind>1){
                    return true;
                }
            }
        }
        return false;
    }
};