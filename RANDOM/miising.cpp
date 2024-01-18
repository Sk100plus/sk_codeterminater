// #include<bits/stdc++.h>
// using namespace std;
// int main(){
 
//   int n,sum1=0,sum2=0;
//   cin>>n;
//    int arr[n];
//    for(int i=0;i<n-1;i++){
//     cin>>arr[i];
// sum1=sum1+arr[i];
//    }
//    for(int i=1;i<=n;i++){
// sum2+=i;
//    }
//    cout<<sum2-sum1;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//  int n;
//   cin>>n;
//    int arr[n];
//    for(int i=0;i<n-1;i++){
//     cin>>arr[i];
//    }
//    int val1=arr[0];
//    int val2=1;
//    for(int i=1;i<n-1;i++){
//     val1=(val1)^(arr[i]);
//    }
//    for(int i=2;i<=n;i++){
//     val2=(val2)^(i);
//    }
//    int ans=(val1)^(val2);
//    cout<<ans;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
  cin>>n;
   int arr[n];
   for(int i=0;i<n-1;i++){
    cin>>arr[i];
   }
   sort(arr,arr+n-1);
   for(int i=0;i<n;i++){
    int count=0;
    for(int j=i+1;j<=n;j++){
            if(arr[i]==j){
                break;
            }
            else if(arr[i]!=j){
                count=j;
                break;
            }
            
    }
    if(count!=0){
    cout<<count;
    break;
    }
   }
   return 0;
}
