#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int isPowerofTwo(int n){
        if(n<=0)return 0;
        while(n%2==0)n/=2;
        return n==1;
    }
};
int main(){
    int n;
    cin>>n;
    Solution s;
    if(s.isPowerofTwo(n)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }   
    return 0;
}