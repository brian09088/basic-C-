/*
Assignment:A8-1
Name:Ä¬¬f·ì
Student Number:107201522
Course:2020-CE1001
*/
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include <math.h>
using namespace std;
int main()
{
 int n,m;
while (n != -1){
    std::cout<<"Input size:";
    std::cin>>n;
    m = floor(n/2);
    int A[n][n];
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        std::cin>>A[i][j];
        }
    }
if (n%2==1){
    int c=0;
    for(int k=0;k<m+1;k++){
        if (A[m][m-k]==A[m][m+k]&&A[m-k][m]==A[m+k][m]&&A[m+k][m+k]==A[m-k][m-k]&&A[m-k][m+k]==A[m+k][m-k])
        {c=c+1;}
    }
    if (c==m+1){cout<<"Symmetric!"<<"\n";}
    else {cout<<"Non-Symmetric!"<<"\n";}

}
else if (n%2==0 && n!=2){
    int c1=0;
    for(int p=0;p<m;p++){
        for(int j=0;j<n;j++){
            if(A[p][j]==A[n-1-p][j]&&A[j][p]==A[j][n-1-p]){c1++;}
    }
    }
if (c1==m*n){cout<<"Symmetric!"<<"\n";}
    else {cout<<"Non-Symmetric!"<<"\n";}
}

else if (n==2){
    int c2=0;
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if (A[i][i]==A[j][j]&&A[i][j]==A[j][i]){c2++;}
        }
    }if (c2==n*n){cout<<"Symmetric!"<<"\n";}
    else {cout<<"Non-Symmetric!"<<"\n";}
 }



 }
return 0;
}
