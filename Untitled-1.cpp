#include<iostream>
#include<cstring>
using namespace std;
char s1[1000010],s2[1000010];
int border[1000010];
int main(){
scanf("%s %s",s1+1,s2+1);
s1[0]=1; s2[0]=1;
int l1=strlen(s1)-1, l2=strlen(s2)-1;
s1[0]=0; s2[0]=0;
for(int i=2,j=0;i<=l2;i++){
    while(j && s2[i]!=s2[j+1]){
        j=border[j];
    }
    if(s2[i]==s2[j+1]){
        j++;
    }
    border[i]=j;
}
for(int i=1,j=0;i<=l1;i++){
    while(j && s1[i]!=s2[j+1]){
        j=border[j];
    }
    if(s1[i]==s2[j+1]){
        j++;
    }
    if(j==l2){
      printf("%d\n",i+1-l2);
    }
}
for(int i=1;i<=l2;i++){
printf("%d ",border[i]);
}
}