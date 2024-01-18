// Doubly ended queue properties:
// 1.push_front 2.pop_front 3.push_back 4.pop_back
#include<bits/stdc++.h>
using namespace std;
       long long  answer(long long  n){
        if(n==1||n==2)return n;
        else return answer(n-1)+answer(n-2);
       }
int main(){
int n;
cin>>n;
while(n--){
    long long  a;
    cin>>a;
    cout<<answer(a)<<endl;
}
    return 0;
}