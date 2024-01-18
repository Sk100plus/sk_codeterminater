#include<bits/stdc++.h>
using namespace std;
void insert(stack<int> &stack,int num){
	int top;
	if(stack.empty()||(!stack.empty()&&stack.top()<num)){
		stack.push(num);
		return;
	}
		top=stack.top();
		stack.pop();
	insert(stack,num);
	stack.push(top);

}
void solve(stack<int> &stack){
	if(stack.empty())
	return ;
	int num=stack.top();
	stack.pop();
	solve(stack);
	insert(stack,num);
}
void sortStack(stack<int> &stack)
{
	
	solve(stack);
}
int main(){
    stack<int> st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        st.push(p);
    }
sortStack(st);
while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}
    return 0;
}