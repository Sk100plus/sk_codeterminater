#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    int count=1;
    int Srow=0,Scol=0,Erow=n-1,Ecol=n-1;
// int i=0,j=0;
    while(count!=n*n+1){
       for(int i=Scol;i<=Ecol&&count<=n*n+1;i++)
       {
        arr[Srow][i]=count++;
       }
       Srow++;
       for(int i=Srow;i<=Erow&&count<=n*n+1;i++){
        arr[i][Ecol]=count++;
       }
       Ecol--;
       for(int i=Ecol;i>=Scol&&count<=n*n+1;i--){
arr[Erow][i]=count++;
       }
       Erow--;
       for(int i=Erow;i>=Srow&&count<=n*n+1;i--){
        arr[i][Scol]=count++;
       }
       Scol++;
    }
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}