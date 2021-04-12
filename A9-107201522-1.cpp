/*
Assignment:A9-1
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
char stack[105], stack_top;

int main ()
{
    string cmd;
    char i;

    stack_top = 0;

    while( cin >> cmd )
    {   if( cmd == "push" )
        {   cin >> i;
            stack[stack_top] = i;
            stack_top++;
        }
        else if( cmd == "pop" )
        {
            if( stack_top == 0 )
                cout << "empty" << endl;
            else
            {
                cout << stack[stack_top-1] << endl;
                stack_top--;
            }
        }
        else if ( cmd == "list" )
        {int length = sizeof(stack)/sizeof(*stack);
        for(int k=0;k<length;k++)
        {cout<<stack[k]<<" ";}
        }
        else{break;}
    }

    return 0;
}


