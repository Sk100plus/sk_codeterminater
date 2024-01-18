// #include<iostream>
// #include<math.h>
// using namespace std;
// void swap(int &a,int &b){
//     int sum=a+b;
// a=(sum)-a;
// b=(sum)-b;
// }
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int i=0,j=n-1;
//     while(i<=j){
//         if(arr[i]==1&&arr[j]==0){
//         swap(arr[i],arr[j]);
//         i++,j--;
//     }
// else if(arr[i]==0){
//     i++;
// }
// else if(arr[j]==1){
//     j--;
// }
//     }
// 	for(int i=0;i<n;i++){
// 		cout<<arr[i]<<" ";
// 	}
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//      int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//      for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j])swap(arr[i],arr[j]);
//         }
//     }
//    for(int j=0;j<n;j++){
//            cout<<arr[j]<<" ";
//         }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
    cin>>n;
    int arr[n];
    int zero=0,one=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0)zero++;
        else one++;
    }
    int a[n];
    for(int i=0;i<zero;i++){
        a[i]=0;
    }
     for(int i=zero;i<one+zero;i++){
        a[i]=1;
    }
    for(int j=0;j<n;j++){
           cout<<a[j]<<" ";
        }

    return 0;
}