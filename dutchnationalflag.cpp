#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void coloursort(vector<int>&nums){
        int n=nums.size();
        int l=0,r=n-1,mid=0;
        while(mid<=r){
            if(nums[mid]==0){
                swap(nums[mid++],nums[l++]);
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[mid],nums[r--]);
            }
        }
    }
};
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    cout<<"Elements:";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution s;
    s.coloursort(nums);
    cout<<"Sorted Elements:";
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }   
    cout<<endl;
    return 0;
}