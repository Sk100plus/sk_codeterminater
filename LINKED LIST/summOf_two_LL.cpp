#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> sum(vector<int> v1,vector<int > v2){
int size1=v1.size();
int size2=v2.size();
vector<int> v3;
if(size1!=size2){
  int carry=0,rem=0;
            while(size1>=1){
                if(size2>=1){
int sum=v1[size1-1]+v2[size2-1];
int ans=sum+carry;
if(ans==10){
    carry=1;
}
else{
carry=sum/10;
}

cout<<carry<<" ";
v3.push_back(ans%10);
                }
                else{
                    int sum=v1[size1-1];
                    int ans=sum+carry;
                    if(ans==10){
    carry=1;
}
else{
carry=sum/10;
}
                    cout<<carry<<" ";
                    if(size1==1)
                    v3.push_back(ans);
                    else
                    v3.push_back(ans%10);
                }
                size2--;
 size1--;
            }
                reverse(v3.begin(),v3.end());
                return v3;
}
           
        
        if(size1==size2){
            int carry=0,rem=0;
            while(size1>=1){
int sum=v1[size1-1]+v2[size2-1];
int ans=sum+carry;
carry=sum/10;
 if(size1==1)
                    v3.push_back(ans);
                    else
                    v3.push_back(ans%10);
size1--;size2--;
                }
                reverse(v3.begin(),v3.end());
                return v3;
        }
        
//    return v3;
}

int main(){
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    int a,b;
    cin>>a>>b;
    for(int i=0;i<a;i++){
        int p;
        cin>>p;
        v1.push_back(p);
    }
    for(int i=0;i<b;i++){
        int p;
        cin>>p;
        v2.push_back(p);
    }
    if(a>b){
v3=sum(v1,v2);
for(int i=0;i<v3.size();i++){
    cout<<v3[i];
}
    }
    else if(a<=b){
        v3=sum(v2,v1);
for(int i=0;i<v3.size();i++){
    cout<<v3[i];
}
    }

    return 0;
}