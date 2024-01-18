// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int t;
//   cin>>t;
//   while(t--){
//    int a,b;
//    cin>>a>>b;
//    string s1,s2;
//    cin>>s1>>s2;
// int count1=0;
//    for(int i=1;i<s1.length();i++){
//     if(s1[i]!=s1[i-1])
//    {
//     count1++;
//    }
//    }
//    int count2=0;
//     for(int i=1;i<s2.length();i++){
//     if(s2[i]!=s2[i-1])
//    {
//     count2++;
//    }
//    }
//    if(count1==s1.length()-1)
//    {
//     cout<<"Yes"<<endl;
//     continue;
//    }
//    else if(count1!=s1.length()-1)
//    {
//     cout<<"No"<<endl;
//     continue;
//    }
//    else{
//      int count=0;
//     for(int i=1;i<s2.length();i++){
//         if(s2[i]==s2[i-1])count++;
//     }
//     if(count==s2.length()-1){
//     cout<<"No"<<endl;
// continue;
//     }
//     char ch=s2[0],ph=s2[s2.length()-1];
//    bool vk=true;
//    if(ch!=ph){
// cout<<"No"<<endl;
//             continue;
//         }
//    for(int i=1;i<s1.length();i++){
//     if(s1[i]=='1'&&s1[i-1]=='1'){
//         if(ch!='0'&&ph!='0'){
//             vk=false;
//             break;
//         }
//     }
//         else   if(s1[i]=='0'&&s1[i-1]=='0'){
//         if(ch!='1'&&ph!='1'){
//             vk=false;
//             break;
//         }
//     }
   
//    }
//    if(vk==false)
//    cout<<"No"<<endl;
//    else cout<<"Yes"<<endl;
//    }

//   }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        string s1, s2;
        cin >> s1 >> s2;
        int count1 = 0;
        
        for (int i = 1; i < s1.length(); i++) {
            if (s1[i] != s1[i - 1]) {
                count1++;
            }
        }
        
        int count2 = 0;
        for (int i = 1; i < s2.length(); i++) {
            if (s2[i] != s2[i - 1]) {
                count2++;
            }
        }
        
        if (count1 == s1.length() - 1) {
            cout << "Yes" << endl;
            continue;
        } else if (count1 != s1.length() - 1) {
            cout << "No" << endl;
            continue;
        } else {
            int count = 0;
            for (int i = 1; i < s2.length(); i++) {
                if (s2[i] == s2[i - 1]) {
                    count++;
                }
            }
            if (count == s2.length() - 1) {
                cout << "No" << endl;
                continue;
            }
            
            char ch = s2[0];
            char ph = s2[s2.length() - 1];
            bool vk = true;
            
            if (ch != ph) {
                cout << "No" << endl;
                continue;
            }
            
            for (int i = 1; i < s1.length(); i++) {
                if (s1[i] == '1' && s1[i - 1] == '1') {
                    if (ch != '0' && ph != '0') {
                        vk = false;
                        break;
                    }
                } else if (s1[i] == '0' && s1[i - 1] == '0') {
                    if (ch != '1' && ph != '1') {
                        vk = false;
                        break;
                    }
                }
            }
            
            if (vk == false)
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
    }
    return 0;
}


