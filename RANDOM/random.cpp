#include<bits/stdc++.h>
#include<time.h>
using namespace std;
int main(){
    // It generate same random number at every time
//    It changes the random number according to time
    srand(time(0));
    for(int i=0;i<6;i++){
        cout<<rand()%6<<endl;
    }
   
    return 0;
}