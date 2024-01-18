// IF S1=AABCDE AND S2=AABNHCD;
// THEN LONGEST COMMON SUBSEQUENE WILL BE "AABCD" ANSWER


//      ***********HERE WE FIND MINIMUM NUMBER OF CHARACTER DELETING TO MAKE IT PALLINDROME****************


//  int solve(string a,string b){
//       vector<int> curr(b.length()+1,0);
//       vector<int> next(b.length()+1,0);
//       for(int i=a.length()-1;i>=0;i--){
//           for(int j=b.length()-1;j>=0;j--){
//               int ans=0;
//               if(a[i]==b[j])
//               ans=1+next[j+1];
//               else
//               ans=max(next[j],curr[j+1]);
//               curr[j]=ans;
//           }
//           next=curr;
//       }
//       return next[0];
//   }
//     int minimumNumberOfDeletions(string S) { 
//         // code here
//         string rev=S;
//         reverse(rev.begin(),rev.end());
//         int ans=S.length()-solve(S,rev);
//         return ans;
//     } 