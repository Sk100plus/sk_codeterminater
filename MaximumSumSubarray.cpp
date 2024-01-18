#include <bits/stdc++.h>
using namespace std;

int  main() {
	long  a;
	cin>>a;
    vector<long > vec(a);
    for(long  i=0;i<a;i++)cin>>vec[i];
		long  maxi=INT_MIN;
		long  sum=0;
		for(long  i=0;i<a;i++){
			sum+=vec[i];
		if(sum<0)sum=0;
			if(sum>maxi)
			maxi=max(sum,maxi);
		}
		cout<<maxi<<endl;
	return 0;
}