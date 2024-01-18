// bool isPrime(int n) {
//     if (n <= 1) {
//         return false;
//     }

//     if (n <= 3) {
//         return true;
//     }

//     if (n % 2 == 0 || n % 3 == 0) {
//         return false;
//     }

//     for (int i = 5; i * i <= n; i += 6) {
//         if (n % i == 0 || n % (i + 2) == 0) {
//             return false;
//         }
//     }

//     return true;
// }

 #include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a1,a2,a3,b1,b2,b3;
	    cin>>a1>>a2>>a3>>b1>>b2>>b3;
	    vector<int> vec1;
	    vector<int> vec2;
	    vec1.push_back(a1);	    vec1.push_back(a2);
	    vec1.push_back(a3);
  vec2.push_back(b1);	    vec2.push_back(b2);
	    vec2.push_back(b3);
	    sort(vec1.begin(),vec1.end());
	    	    sort(vec2.begin(),vec2.end());
if(vec1[2]>vec2[2])
cout<<"Alice"<<endl;
else if(vec1[2]<vec2[2])
cout<<"Bob"<<endl;
else if(vec1[2]==vec2[2]){
    if(vec1[1]>vec2[1])
cout<<"Alice"<<endl;
else if(vec1[1]<vec2[1])
cout<<"Bob"<<endl;
}
else if(vec1[2]==vec2[2]&&vec1[1]==vec2[1]){
     if(vec1[0]>vec2[0])
cout<<"Alice"<<endl;
else if(vec1[0]<vec2[0])
cout<<"Bob"<<endl;
}
else if(vec1[2]==vec2[2]&&vec1[1]==vec2[1]&&vec1[0]==vec2[0]) cout<<"Tie"<<endl;
	}
	    
	 return 0;
}
