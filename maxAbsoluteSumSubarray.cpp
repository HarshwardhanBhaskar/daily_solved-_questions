#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maxAbsolute(vector<int>& nums){
        int n=nums.size();
        int maxi=0,mini=0;
        int maxS=0,minS=0;
        for(int i=0;i<n;i++){
            mini=min(nums[i],nums[i]+mini);
            maxi=max(nums[i],nums[i]+maxi);
            maxS=max(maxS,maxi);
            minS=min(minS,mini);
        }
        return max(maxS,abs(minS));
    }
};
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution s;
    cout<<s.maxAbsolute(nums)<<endl;
    return 0;
}
