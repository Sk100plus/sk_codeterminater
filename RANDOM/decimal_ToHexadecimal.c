#include<stdio.h>
int main(){
   
//    convert into binary
int n;
scanf("%d",&n);
int t=0;

    char s[100];int i=0;
    while(t!=0){
int value=t%16;
if(value==0){
    s[i]='0';i++;}
else if(value==1){s[i]='1';i++;}
else if(value==2){s[i]='2';i++;}else if(value==3){s[i]='3';i++;}else if(value==4){s[i]='4';i++;}else if(value==5){s[i]='5';i++;}else if(value==6){s[i]='6';i++;}
else if(value==7){s[i]='7';i++;}else if(value==8){s[i]='8';i++;}else if(value==9){s[i]='9';i++;}else if(value==10){s[i]='A';i++;}else if(value==11){s[i]='B';i++;}
else if(value==12){s[i]='C';i++;}else if(value==13){s[i]='D';i++;}else if(value==14){s[i]='E';i++;}else if(value==15){s[i]='F';i++;}
t/=16;
    }
    for(int j=i-1;j>=0;j--){
        printf("%c",s[j]);
    }
    return 0;
}