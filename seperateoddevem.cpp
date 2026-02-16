// solving the problem of separating odd and even numbers in an array uisng two pointer approach
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void separate(vector<int>&nums){
        int n=nums.size();
        int l=0,r=n-1;
        while(l<r){
            while(l<r && nums[l]%2==0)l++;
            while(l<r && nums[r]%2==1)r--;
            if(l<r){
                swap(nums[l],nums[r]);
                l++;
                r--;
            }
        }
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
    s.separate(nums);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}
