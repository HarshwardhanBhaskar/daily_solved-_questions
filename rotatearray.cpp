#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
void rotateArray(vector<int>&arr,int k){
    int n=arr.size();
    vector<int>temp(n);
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];
    }
    arr=temp;
}
};
int main(){
    int n, k;
    cout<<"size of array:";
    cin>>n;
    cout<<"rotate by:";
    cin>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution s;
    s.rotateArray(arr,k);
    cout<<"rotated array:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }   
    return 0;
}