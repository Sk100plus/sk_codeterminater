#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
    int maxSubArray(vector<int>& nums) {
     int val1=INT_MIN;
     int sum=0;
     for(int i=0;i<nums.size();i++){
         sum+=nums[i];
         if(sum>val1)val1=sum;
         if(sum<0)sum=0;
     }
     return val1;
    }
int main() {
  int n;
  cin>>n;
  vector<int> vec(n);
  for(int i=0;i<n;i++){
    cin>>vec[i];
  }
  cout<<maxSubArray(vec);
return 0;
}