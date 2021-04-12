/*
Assignment:A9-2
Name:Ä¬¬f·ì
Student Number:107201522
Course:2020-CE1001
*/
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include <string.h>
#include <vector>
#include <iostream>
#include <string>
using namespace std;
int main(){
    while (true){
        char n;
        cin >> n;
        if (n<='Z' && n>='A')
            {int tran=n+32;
            cout<<(char)tran<<"\n";}
        else if (n<='z' && n>='a')
            {int trans=n-32;
            cout<<(char)trans<<"\n";}
        else if (n<='9' && n>='0')
            {cout<<"number"<<"\n";}
        else
            {break;}
    }return 0;
}
