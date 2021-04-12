/*
Assignment:A11-1
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

bool testShudu(int a[9][9]) {
int i,j,m,n;
bool result = true;
int nBasic = 0;
int nModel = 0x200;
int model[9] = {0,0,0,0,0,0,0,0,0};

for (i=0; i<9; i++) {
nBasic = 0;
for (j=0; j<9; j++) {
nBasic += (nModel>>(a[i][j]));
model[(a[i][j]-1)] += 1;
}
if (nBasic != 0x1FF)
result = false;
for (m=1; m<9; m++) if ( model[m] != model[0] ) {
result = false;
}
}
for (i=0; i<3; i++) for (j=0; j<3; j++) {
nBasic = 0;
for (m=3*i; m<3*i+3; m++) for (n=3*j; n<3*j+3; n++) {
}

}
return result;
}

int main() {
int a[9][9];
string n;
cin>>n;
fstream file1(n);
for (int i=0; i<9; i++)
for (int j=0; j<9; j++) {
file1 >> a[i][j];
}
file1.close();

if (testShudu(a)) {
cout << "Y" << endl;
} else {
cout << "N" << endl;
}
return 1;
}











