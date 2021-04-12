/*
Assignment:A7-2
Name:Ä¬¬f·ì
Student Number:107201522
Course:2020-CE1001
*/
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int f(int n){
    int ans;
    if (n>=10){
        ans = 1+f(n-22)+f(f(n-30)-30);
    }
    else if (5<=n && n<=9){
        ans = 2+f(n-2);
    }
    else {
        ans = 3;
    }
    return ans;
  }

int main(){
    int in;
    int out;
    while (true){
        cin >> in;
       if (in==0){break;}
       else {
       out=f(in);
       cout<<out<<"\n";
       }
    }
return 0;
}



