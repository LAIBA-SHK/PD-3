#include<iostream>
using namespace std;
main()
{
 int age, moves;
 int averageyears;
 cout<<"Enter age of person: ";
 cin>>age;
 cout<<"Enter no. of times they moved:  ";
 cin>>moves;
 averageyears= age/(moves+1);
 cout<<"Average no. of years in the same house:  "<<averageyears;

}
 