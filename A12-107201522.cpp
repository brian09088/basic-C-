/*
Assignment:A12
Name:Ä¬¬f·ì
Student Number:107201522
Course:2020-CE1001
*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

string A[11][3];
int s;
string name1,name2;

int main()
{
    cin>>name1;
    cin>>name2;
    cout<<"sort by (1)id (2)name (3)score\n";
    cin>>s;
    ifstream Infile1(name1,ios::in);
    if(!Infile1)
    {
        cout<<"File could not be opened\n";
    }
    else
    {
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<3;j++)
            {
                Infile1>>A[i][j];
            }
        }
        Infile1.close();
    }

    ifstream Infile2(name2,ios::in);
    if(!Infile2)
    {
        cout<<"File could not be opened\n";
    }
    else
    {
        for(int i=5;i<11;i++)
        {
            for(int j=0;j<3;j++)
            {
                Infile2>>A[i][j];
            }
        }
        Infile2.close();
    }

    string tem[3];
    if(s==1 || s==2)
    {
        for(int i=0;i<11;i++)
        {
            for(int j=i;j<11;j++)
            {
                if(A[j][s-1]<A[i][s-1])
                {
                    for(int k=0;k<3;k++)
                    {
                        tem[k]=A[j][k];
                    }
                    for(int k=0;k<3;k++)
                    {
                        A[j][k]=A[i][k];
                    }
                    for(int k=0;k<3;k++)
                    {
                        A[i][k]=tem[k];
                    }
                }
            }
        }
    }
    if(s==3)
    {
        for(int i=0;i<11;i++)
        {
            for(int j=i;j<11;j++)
            {
                if(A[j][s-1]==A[i][s-1])
                {
                    if(A[j][0]<A[i][0])
                    {
                        for(int k=0;k<3;k++)
                        {
                            tem[k]=A[j][k];
                        }
                        for(int k=0;k<3;k++)
                        {
                            A[j][k]=A[i][k];
                        }
                        for(int k=0;k<3;k++)
                        {
                            A[i][k]=tem[k];
                        }
                    }
                }
                else if(A[j][s-1]>A[i][s-1])
                {
                    for(int k=0;k<3;k++)
                    {
                        tem[k]=A[j][k];
                    }
                    for(int k=0;k<3;k++)
                    {
                        A[j][k]=A[i][k];
                    }
                    for(int k=0;k<3;k++)
                    {
                        A[i][k]=tem[k];
                    }
                }
            }
        }
    }
    ofstream Outfile("list-107201522.txt",ios::out);
    if(!Outfile)
    {
        cout<<"File could not be opened\n";
    }
    else
    {
        for(int i=0;i<11;i++)
        {
            for(int j=0;j<3;j++)
            {
                Outfile<<A[i][j]<<" ";
            }
            Outfile<<"\n";
        }
        Outfile.close();
    }
    if(s==1 || s==2 || s==3)
    {
        for(int i=0;i<11;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<A[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    else{cout<<"exit";}
    return 0;
}


