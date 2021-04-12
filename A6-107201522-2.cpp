/*
Assignment:A6-2
Name:Ä¬¬f·ì
Student Number:107201522
Course:2020-CE1001
*/
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int initial;
    cin >> initial;
    char string[100];
    int len, i;
    for (int x=0;x<initial;x++)
    {   cin>>string;
        len = strlen(string);
        for( i=0 ; i<len ; i++){
             if ('A'<=int(string[i]) and int(string[i])<='Z'){
                       if ('0'<=int(string[i+1]) and int(string[i+1])<='9' and '0'<=int(string[i+2]) and int(string[i+2])<='9'){
                            int x=int(string[i+1])*10-480+int(string[i+2])-48;
                            for(int j=0;j<x;j++){
                                cout<<string[i];}
                       }
                       else {for(int k=0 ; k<int(string[i+1])-48;k++){
                                cout<<string[i];}
                            }
             }
             else{continue;}
        }
        }
    return 0;
    }

