// if A%B=C%D
// FIND X WHERE
// (A+X)%B==(C+X)%D;
// #include <bits/stdc++.h>

// using namespace std;
// int gcd(int a,int b){
//    int res=min(a,b);
//    while(a%res!=0&&b%res!=0){
//     res--;
//    }
//    return res;
// }
// long long lcm(long long a,long long b){
//     return (a*b)/gcd(a,b);
// }
// int main() {
// 	// your code goes here
//  int t;
// 	cin>>t;
// 	while(t--){
// 	   long long  int a,b,c,d;
// 	    cin>>a>>b>>c>>d;
// 	   //long long int sum=/a+b+c+d;
	   
// 	   if((a+1)%b==(c+1)%d)
// 	   cout<<"1"<<endl;
// 	   else {
// 	       long long x=a%b;
// 	       long long y=lcm(b,d);
// 	       x=y-x;
// 	       cout<<x<<endl;
// 	   }
// 	    }
// 	return 0;
// }
