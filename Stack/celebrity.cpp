// A celebrity is a person who is known to all but does not know anyone at a party. If you go to a party of N people, find if there is a celebrity in the party or not.
// A square NxN matrix M[][] is used to represent people at the party such that if an element of row i and column j  is set to 1 it means ith person knows jth person. Here M[i][i] will always be 0.
// Note: Follow 0 based indexing.
// Follow Up: Can you optimize it to O(N)
// Input:
// N = 3     0 1 2
// M[][] = 0{{0 1 0},
//         1 {0 0 0}, 
//         2 {0 1 0}}      Here 0 knows 1 and 2 knows 1 but 1 doesnot knows anyone so 1 will be celebrity

// Output: 1

// Explanation: 0th and 2nd person both
// know 1. Therefore, 1 is the celebrity.

// Solution in O(n^2);

//Approach :Check anyrow whose all element are 0 and any column whose all element is one except that rows-column; 

#include<bits/stdc++.h>
using namespace std;
bool knows(int M[3][3], int a,int b,int n){
        if(M[a][b]==1)return 1;
        return 0;
    }
    //Function to find if there is a celebrity in the party or not.
    int celebrity(int M[3][3], int n,int m) 
    { 
        stack<int> s;
        for(int i=0;i<n;i++){
            s.push(i);        
        }
    while(s.size()>1){
        int a=s.top();
        s.pop();
        int b=s.top();
        s.pop();
        if(knows(M,a,b,n)){
            s.push(b);
        }
        else{
            s.push(a);
        }
    }
    int candidate=s.top();
    bool rowcheck=false;
    int Zcount=0,Ocount=0;
    for(int i=0;i<n;i++){
        if(M[candidate][i]==0)Zcount++;
    }
    if(Zcount==n)rowcheck=true;
    bool colcheck=false;
    int colcount=0;
    for(int i=0;i<n;i++){
        if(M[i][candidate]==1)Ocount++;
    }
    if(Ocount==n-1)colcheck=true;
    if(rowcheck==true&&colcheck==true)return candidate;
    return -1;
    }

int main(){
    int vec[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cin>>vec[i][j];
        }
    }
    cout<<celebrity(vec,3,3);
    return 0;
}