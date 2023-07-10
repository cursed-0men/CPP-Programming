// Write a program to calculate net salary. Program should take following as input
// 1. Basic salary
// 2. Percentage of allowances
// 3. Percentage of Deductions

// formula:
// Net salary= basic salary+percenatge allowances*basic salary  -  basic salary*percent decuctions.

#include<iostream>
using namespace std;
int main(){

float basic;
float percentA;
float percentD;
float Net;

cout<<"basic salary = ";
cin>>basic;

cout<<"percent allowance = ";
cin>>percentA;

cout<<"percent deduction = ";
cin>>percentD;

Net = basic+((percentA/100)*basic)-(basic*(percentD/100));

cout<<"NET SALARY = "<< Net;
    return 0;
}
