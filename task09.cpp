#include<iostream>
using namespace std;
main()
{
 int num, sum=0;
 cout<<"Enter a 4-digit number: ";
 cin>>num;
 sum +=num%10;
 num/=10;
 sum +=num%10;
 num/=10;
 sum +=num%10;
 num/=10;
 sum +=num%10;
 cout<<"The sum of digits is: "<<sum;

}