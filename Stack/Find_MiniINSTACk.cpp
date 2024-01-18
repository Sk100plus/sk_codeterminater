#include<bits/stdc++.h>
#include<math.h>
using namespace std;
class special{
  private:
  stack<int >st;
  int mini=INT_MAX;
public:
void push(int data){
if(st.empty()){
  st.push(data);
mini=data;
}
else{
  if(data<mini){
    st.push(2*data-mini);
  }
  else{
    st.push(data);
  }
}
}
int pop(){
if(st.empty())return -1;
int curr=st.top();
st.pop();
if(curr>mini)
return curr;
else{
  int prevMin=mini;
  int val=2*mini-curr;
  mini=val;
  return prevMin;
}
}
int top(){
  if(st.empty())return -1;
  else{
      int curr=st.top();
    if(curr<mini)return curr;
    else{
      return mini;
    }
  }
}
bool empty(){
  return st.empty();
}
int getMin(){
  if(st.empty())return -1;
  return mini;
}
};

int main(){
   special st;
  int t;
   cin>>t;
  for(int i=0;i<t;i++){
    int o;
    cin>>o;
    st.push(o);
  }
 cout<<st.pop()<<endl;
//  st.pop();
 cout<<st.pop()<<endl;
 cout<<st.getMin()<<endl;
    return 0;
}