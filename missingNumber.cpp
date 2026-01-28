#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
class Solution {
public:
    int missingNumber(int arr[],int n) {
       int sum=0;
       for(int i=0;i<n;i++){
        sum+=arr[i];
       }
       int num=0;
       for(int j=1;j<n+2;j++){
        num+=j;
       }
         return num-sum;
    }
};
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n-1];
    cout<<"Enter the elements of array:";
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    Solution obj;
    int missing=obj.missingNumber(arr,n-1);
    cout<<"The missing number is:"<<missing;
    return 0;
}