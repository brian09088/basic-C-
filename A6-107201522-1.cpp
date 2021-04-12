/*
Assignment:A6-1
Name:Ä¬¬f·ì
Student Number:107201522
Course:2020-CE1001
*/
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
int main()
{
int number1,number2,number3,number4,i,j,k;
int A[6][6],B[6][6],C[6][6];
std::cout << "Matrix A size=";
std::cin >> number1 >> number2;
std::cout << "Matrix B size=";
std::cin >> number3 >> number4;
if (number2 != number3)
    std::cout << "Can¡¦t be multiplied";
if (number2 == number3)
    std::cout << "Matrix A\n";
    for(i=0;i<number1;i++){
        for(j=0;j<number2;j++){
            std::cin >> A[i][j];
        }
    }
    std::cout << "Matrix B\n";
    for(i=0;i<number3;i++){
        for(j=0;j<number4;j++){
            std::cin >> B[i][j];
        }
    }
    for(i=0;i<number1;i++){
        for(j=0;j<number4;j++){
            C[i][j]=0;
            for(k=0;k<number2;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    std::cout<< "Multiplication\n";
    for(i=0;i<number1;i++){
        for(j=0;j<number4;j++){
            std::cout<<C[i][j]<<" ";
        }
        std::cout<<"\n";
    }
return 0;
}

