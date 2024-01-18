// #include<bits/stdc++.h>
// using namespace std;   
// int main(){
//     int num;
//     cin>>num;
//    vector<int> vec;
//    vector<int> answer;
//    for(int i=0;i<num;i++){
//     int value;
//     cin>>value;
//     vec.push_back(value);
//    }
//    int k;
//    cin>>k;
//    int i=0;int j=k-1,q=0;
//    while(j<=num-1){
//     if(vec[i]<0){
// answer.push_back(vec[i]);
// if(i==num-1)break;
// else{
// q++;
// i=q;
// j++;
// }
//     }
//     else if(vec[i]>=0){
//         if(i<j)i++;
//         else if(i==j){
//             answer.push_back(0);
//             q++;
//             i=q;
//             j++;
//         }
//     }
   
//    }
//     for(int i=0;i<answer.size();i++){
//         cout<<answer[i]<<" ";
//     }
//     return 0;
// }

// Another method using doubly ended queue
// deque<long long> dq;
// vector<long long int> ans;
// for(int i=0;i<K;i++){
//         if(A[i]<0)
//         dq.push_back(i);
// }
// if(dq.size()>0){
//     ans.push_back(A[dq.front()]);
// }
// else{
//     ans.push_back(0);
// }
// for(int i=K;i<N;i++){
//     if(dq.empty()&&i-dq.front>=K){
//         dq.pop_front();
//     }
//     if(A[i]<=){
//         dq.push_back(i);
//     }
//     if(dq.size()>0)
//     ans.push_back(A[dq.front()]);
//     else
//     ans.push_back(0);
// }
// return ans;
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec1(n);
    vector<int> vec2(n);
    for(int i=0;i<n;i++){
            cin>>vec1[i];
    }
    for(int i=0;i<n;i++){
            cin>>vec2[i];
    }
    int bal=0,k=0;
    int front=0;int rear=0;
    int count=1;
    int u;
    while(count!=2){
        
        if(bal+vec1[k]-vec2[k]>=0){
            bal=bal+(vec1[k]-vec2[k]);
            k++;
            rear++;
        }
        else if(bal+vec1[k]-vec2[k]<0){
            k=rear+1;
            bal=0;
            u=k;
            front=rear+1;
        }
        if(k==n-1){
            k=0;
            rear=k;
            
        }
        if(front==rear){
count=2;
        }
       
    }
    if(count==2)
     cout<<u<<endl;
     else cout<<-1<<endl;
    return 0;
}

// MAIN SOLUTION:
 
//  class Solution{
//   public:
  
//     //Function to find starting point where the truck can start to get through
//     //the complete circle without exhausting its petrol in between.
//     int tour(petrolPump p[],int n)
//     {
//         int deficit=0;
//         int balance=0;
//         int start=0;
//         for(int i=0;i<n;i++){
//             balance+=p[i].petrol-p[i].distance;
//             if(balance<0){
//                 deficit+=balance;
//                 start=i+1;
//                 balance=0;
//             }
//         }
//         if(deficit+balance>=0){
//             return start;
//         }
//             else{
//                 return -1;
//             }
        
//        //Your code here
//     }
// };
