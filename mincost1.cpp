#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int mincost(vector<int>&arr){
        int n=arr.size();
        int count=arr[0];
        int c1=INT_MAX,c2=INT_MAX;
        for(int i=1;i<n;i++){
            if(arr[i]<c1){
                c2=c1;
                c1=arr[i];
            }else if(arr[i]<c2){
                c2=arr[i];
            }
        }
        count+=c1+c2;
        return count;
    }   
};
int main(){ 
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution s;
    cout<<s.mincost(arr)<<endl;
    return 0;
}