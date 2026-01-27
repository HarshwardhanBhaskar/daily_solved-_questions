#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closet=nums[0]+nums[1]+nums[2];
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1])
            continue;
            int l=i+1;
            int r=n-1;
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                if(abs(target-sum)<abs(target-closet)){
                    closet=sum;
                }if(sum==target){
                    return sum;
                }else if(sum<target){
                    l++;
                }else{
                    r--;
                }
            }
        }
        return closet;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;
    Solution s;
    cout<<s.threeSumClosest(nums,target)<<endl;
    return 0;
}