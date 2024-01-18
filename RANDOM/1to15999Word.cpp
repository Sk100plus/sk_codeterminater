#include<bits/stdc++.h>
using namespace std;

int main(){
   string s;
   cin>>s;
  int count=0;
   for(int i=0;i<s.length();i++){
    count++;
   }
   int number=stoi(s);
   vector<string> answer;
  //  if(count==3){
   while(number!=0&&count!=0){
int digit;
if(count==5)digit=number/10000;
if(count==4)digit=number/1000;
if(count==3)digit=number/100;
if(count==2)digit=number/10;
if(count==1)digit=number/1;

//At thousandth place 
if(digit==2&&count==5){answer.push_back("twenty");}
if(digit==3&&count==5){answer.push_back("thirty");}
if(digit==4&&count==5){answer.push_back("forty");}
if(digit==5&&count==5){answer.push_back("fifty");}
if(digit==6&&count==5){answer.push_back("sixty");}
if(digit==7&&count==5){answer.push_back("seventy");}
if(digit==8&&count==5){answer.push_back("eighty");}
if(digit==9&&count==5){answer.push_back("ninety");}

if(digit==2&&count==4){answer.push_back("two");
answer.push_back("thousand");}
if(digit==3&&count==4){answer.push_back("three");
answer.push_back("thousand");}
if(digit==4&&count==4){answer.push_back("four");
answer.push_back("thousand");}
if(digit==5&&count==4){answer.push_back("five");
answer.push_back("thousand");}
if(digit==6&&count==4){answer.push_back("six");
answer.push_back("thousand");}
if(digit==7&&count==4){answer.push_back("seven");
answer.push_back("thousand");}
if(digit==8&&count==4){answer.push_back("eight");
answer.push_back("thousand");}
if(digit==9&&count==4){answer.push_back("nine");
answer.push_back("thousand");}

if(digit==10&&count==4){answer.push_back("ten");
answer.push_back("thousand");}
if(digit==11&&count==4){answer.push_back("eleven");
answer.push_back("thousand");}
if(digit==12&&count==4){answer.push_back("twelve");
answer.push_back("thousand");}
if(digit==13&&count==4){answer.push_back("thirteen");
answer.push_back("thousand");}
if(digit==14&&count==4){answer.push_back("forteen");
answer.push_back("thousand");}
if(digit==15&&count==4){answer.push_back("fifteen");
answer.push_back("thousand");}

// At hundredth place

if(digit==1&&count==3){answer.push_back("one");
answer.push_back("hundred");}
if(digit==2&&count==3){answer.push_back("two");
answer.push_back("hundred");}
if(digit==3&&count==3){answer.push_back("three");
answer.push_back("hundred");}
if(digit==4&&count==3){answer.push_back("four");
answer.push_back("hundred");}
if(digit==5&&count==3){answer.push_back("five");
answer.push_back("hundred");}
if(digit==6&&count==3){answer.push_back("six");
answer.push_back("hundred");}
if(digit==7&&count==3){answer.push_back("seven");
answer.push_back("hundred");}
if(digit==8&&count==3){answer.push_back("eight");
answer.push_back("hundred");}
if(digit==9&&count==3){answer.push_back("nine");
answer.push_back("hundred");}

// number 10 to 19

if(number==10){
  answer.push_back("ten");
  break;
}
if(number==11){
  answer.push_back("eleven");
  break;
}
if(number==12){
  answer.push_back("twelve");
  break;
}
if(number==13){
  answer.push_back("thirteen");
  break;
}
if(number==14){
  answer.push_back("forteen");
  break;
}
if(number==15){
  answer.push_back("fifteen");
  break;
}
if(number==16){
  answer.push_back("sixteen");
  break;
}
if(number==17){
  answer.push_back("seventeen");
  break;
}
if(number==18){
  answer.push_back("eighteen");
  break;
}
if(number==19){
  answer.push_back("ninteen");
  break;
}

// At tenth place

if(digit==2&&count==2)answer.push_back("twenty");
if(digit==3&&count==2)answer.push_back("thirty");
if(digit==4&&count==2)answer.push_back("forty");
if(digit==5&&count==2)answer.push_back("fifty");
if(digit==6&&count==2)answer.push_back("sixty");
if(digit==7&&count==2)answer.push_back("seventy");
if(digit==8&&count==2)answer.push_back("eighty");
if(digit==9&&count==2)answer.push_back("ninety");
if(digit==1&&count==1)answer.push_back("one");
if(digit==2&&count==1)answer.push_back("two");
if(digit==3&&count==1)answer.push_back("three");
if(digit==4&&count==1)answer.push_back("four");
if(digit==5&&count==1)answer.push_back("five");
if(digit==6&&count==1)answer.push_back("six");
if(digit==7&&count==1)answer.push_back("seven");
if(digit==8&&count==1)answer.push_back("eight");
if(digit==9&&count==1)answer.push_back("nine");
if(count==5)number=number%10000;
if(count==4)number=number%1000;
if(count==3)number=number%100;
if(count==2)number=number%10;
if(count==1)number=number%1;
count--;

   }
   
   for(int i=0;i<answer.size();i++){
    cout<<answer[i];
   }
    return 0;
}