// Question: Your task to find median of elements :
// Median is the middle value in an ordered integer list . If the size
// of the list is even there is the floor of the average of the middle values:



// Approach first:
#include<bits/stdc++.h>
using namespace std;
vector<int> findMedian(vector<int> &arr, int n){
	
	// Write your code here 
	vector<int> ans;
	vector<int> vec;
	for(int i=0;i<n;i++){
       vec.push_back(arr[i]);
	   sort(vec.begin(),vec.end());
	   if(vec.size()%2!=0){
		   int ind=vec.size()/2;
		   ans.push_back(vec[ind]);
	   }
	   else{
		   int ind=vec.size()/2;
		   int val=ind-1;
		   ans.push_back((vec[ind]+vec[val])/2);
	   }

	}
	return ans;
	
}

// Time complexity: O(n^2log(n));

// Approach 2:



#include<bits/stdc++.h>
int signum(int a,int b){
	if(a==b)return 0;
	else if(a>b)return 1;
	else return -1;
}
void callMed(int ele,priority_queue<int>& maxpq,
	priority_queue<int,vector<int>,greater<int>>& minpq,int &median
){
switch(signum(maxpq.size(),minpq.size())){
case 0: if (ele>median){
	minpq.push(ele);
	median=minpq.top();
}
else{
	maxpq.push(ele);
	median=maxpq.top();
}
break;
case 1:if(ele>median){
	minpq.push(ele);
	median=(minpq.top()+maxpq.top())/2;
}
else{
	minpq.push(maxpq.top());
	maxpq.pop();
	maxpq.push(ele);
	median=(minpq.top()+maxpq.top())/2;
}
break;
case -1:if(ele>median){
	maxpq.push(minpq.top());
	minpq.pop();
	minpq.push(ele);
		median=(minpq.top()+maxpq.top())/2;

}
else{
	maxpq.push(ele);
		median=(minpq.top()+maxpq.top())/2;
}
break;
}
}
vector<int> findMedian(vector<int> &arr, int n){
	
	// Write your code here 
	vector<int> ans;
	vector<int> vec;
	priority_queue<int,vector<int>,greater<int>> minpq;
	priority_queue<int> maxpq;
int median=0;
	for(int i=0;i<n;i++){
     callMed(arr[i],maxpq,minpq,median);
	 ans.push_back(median);
	}
	return ans;
	
}
