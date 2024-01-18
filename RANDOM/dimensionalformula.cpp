#include <iostream>
using namespace std;
// j,i,k j=row i=column k=3rd dimension ;0
int main(){
    string first[7]={"(i-lb1)","(j-lb2)","(k-lb3)","(l-lb4)","(m-lb5)","(n-lb6)","(o-lb7)"};
    string length[6]={"(ub1-lb1+1)","(ub2-lb2+1)","(ub3-lb3+1)","(ub4-lb4+1)","(ub5-lb5+1)","(ub6-lb6+1)"};
    int n;
    cin>>n;
    cout<<"Ba +w*{";
    while(n){
        int i=n-1;
        cout<<first[i];
        int j=i-1;
        while(j>=0){
            cout<<length[j];
            if(j==0){
                cout<<"+";
            }
            j--;
        }
        n--;
    }
    cout<<"}";
 return 0;
}