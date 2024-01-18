// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(a[i]>a[j])swap(a[i],a[j]);
//         }
//     }
   
//     int answer;
//     for(int i=1;i<n;i++){
// if(a[i]!=a[i-1]){
//     if(i==n-1){
//         answer=a[i];
//         break;
//     }
// answer=a[i-1];
// break;
// }
// else if(a[i]==a[i-1]&&i==n-2){
// answer=a[i+1];
// }
// else
// i++;
//     }
//     cout<<answer;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int answer;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
                if(a[i]==a[j]&&i!=j){
                count++;
                break;
                }
        }
        if(count==0){answer=a[i];break;}
    }
    cout<<answer;
    return 0;
}