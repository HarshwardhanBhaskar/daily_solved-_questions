// kadarnes type
#include <bits/stdc++.h>
using namespace std;    
class Solution {
public:
int besttimeToBuyandSell(vector<int>& prices){
    int minp=INT_MAX;
    int maxp=INT_MIN;
    int n=prices.size();
for(int i=0;i<n;i++){
    minp=min(minp,prices[i]);
    maxp=max(maxp,prices[i]-minp);  
}
return maxp;
}   
};
int main(){
    int n;
    cin>>n;
    vector<int>prices(n);
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    Solution s;
    cout<<s.besttimeToBuyandSell(prices)<<endl;
    return 0;
}