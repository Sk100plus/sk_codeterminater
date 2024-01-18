// You are given an array/list 'prices' where the elements of the array 
// represent the prices of the stock as they were yesterday and indices
//  of the array represent minutes. Your task is to find and return the
//   maximum profit you can make by buying and selling the stock. You can
//    buy and sell the stock only once.

// Note:

// You can’t sell without buying first.

// Sample Input 1:
// 2
// 4
// 1 2 3 4
// 4
// 2 2 2 2
// Sample Output 1:
// 3
// 0

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> prices(t);
    for(int i=0;i<t;i++){
        cin>>prices[i];
    }
     int mini=INT_MAX;
    int ans=0;
     mini=min(mini,prices[0]);
    for(int i=1;i<prices.size();i++){
        mini=min(mini,prices[i]);
        ans=max(ans,prices[i]-mini);
    }
    cout<< ans;

    return 0;
}