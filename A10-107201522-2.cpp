/*
Assignment:A10-2
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
    char asc[100];
    string space;
    char aspace;
    while(true){
        cout<<"(a)insert (b)delete (c)print (d)exit"<<endl;
        string str;
        cin>>str;
        if (str=="a"){
            cout<<"Please enter a word:"<<endl;
            string nn;
            cin>>nn;
            word[n]=nn;
            asc[n]=nn[0];
            n++;
        }
        int len = sizeof(word)/sizeof(*word);
        for(int i=n-1;i>0;i--){
            for(int j=0;j<=i-1;j++){
                if (int(asc[j])>int(asc[j+1])){
                    aspace=asc[j];
                    asc[j]=asc[j+1];
                    asc[j+1]=aspace;

                    space=word[j];
                    word[j]=word[j+1];
                    word[j+1]=space;}
            }
        }
        if (str=="b"){
            if(n==0){
                cout<<"Empty!";
               }
            else{
                n--;
                }
            }
        if (str=="c"){
            for(int k=0;k<n;k++){
                cout<<"number:"<<k+1<<" "<<"word:"<<word[k]<<endl;
            }
        }
        if (str=="d"){break;}
    }
    return 0;
}
