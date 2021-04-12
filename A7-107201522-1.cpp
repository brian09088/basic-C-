/*
Assignment:A7-1
Name:Ä¬¬f·ì
Student Number:107201522
Course:2020-CE1001
*/
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int initial;
int n;
int e,f,g,h;
int a,b,c,d;

int g1(int n){
int aa=0;
a=initial/1000;
b=(initial-a*1000)/100;
c=(initial-a*1000-b*100)/10;
d=initial-a*1000-b*100-c*10;
e=n/1000;
f=(n-e*1000)/100;
g=(n-e*1000-f*100)/10;
h=n-e*1000-f*100-g*10;
        if (a==e&&b==f&&c==g&&d==h){return 0;}
        if (e==a){aa++;}
        if (f==b){aa++;}
        if (g==c){aa++;}
        if (h==d){aa++;}
        return aa;}
int g2(int n){
int bb=0;
a=initial/1000;
b=(initial-a*1000)/100;
c=(initial-a*1000-b*100)/10;
d=initial-a*1000-b*100-c*10;
e=n/1000;
f=(n-e*1000)/100;
g=(n-e*1000-f*100)/10;
h=n-e*1000-f*100-g*10;
        if (e==a&&f==b&&g==c&&h==d){return 0;}
        if (e==b||e==c||e==d){bb++;}
        if (f==a||f==c||f==d){bb++;}
        if (g==b||g==a||g==d){bb++;}
        if (h==b||h==c||h==a){bb++;}
        return bb;}

int main(){
int aa,bb,n;
std::cout<<"Imput Number:";
std::cin>>initial;
while (true){
        std::cout<<"Guess:";
        std::cin>>n;
        int out;
        aa=g1(n);
        bb=g2(n);
        if(n==initial)
        {cout<<"You Win!";break;}
        else{
        std::cout<<aa<<"A"<<bb<<"B\n";
        }
}return 0;
}


