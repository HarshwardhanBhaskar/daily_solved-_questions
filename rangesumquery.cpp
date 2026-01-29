#include<bits/stdc++.h>
using namespace std;
class NumArray{
    public:
    vector<int> prefixSum;
    NumArray(vector<int>& nums) {
        int n=nums.size();
        prefixSum.resize(n+1,0);
        for(int i=0;i<n;i++){
            prefixSum[i+1]=prefixSum[i]+nums[i];
        }
    }
    int sumRange(int l,int r){
        return prefixSum[r+1]-prefixSum[l]; 
    }
};
int main(){
    vector<int> nums={-2,0,3,-5,2,-1};
    NumArray* obj=new NumArray(nums);
    cout<<obj->sumRange(0,2)<<endl; // o/p: 1
    cout<<obj->sumRange(2,5)<<endl; // o/p: -1
    cout<<obj->sumRange(0,5)<<endl; // o/p: -3
    return 0;
}