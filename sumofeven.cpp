#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int sumofEven(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            sum+=arr[i];
        }
    }
    return sum;
}
};
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution s;
    cout<<s.sumofEven(arr,n)<<endl;
    return 0;
}