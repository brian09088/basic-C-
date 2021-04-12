/*
Assignment:A10-1
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

int main()
{
    int n = 0;
    string word[100];
    while(true){
        string str;
        cin>>str;
        if (str!="-1"){
            word[n]=str;
            n++;
        }
        else if(str=="-1"){
            break;
        }
    }
    for(int k=0;k<n;k++){
        cout<<"number:"<<k+1<<" "<<"word:"<<word[k]<<endl;
    }
    return 0;
}
