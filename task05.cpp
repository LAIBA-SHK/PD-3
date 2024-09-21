#include<iostream>
using namespace std;
main()
{
 string name;
 int weight;
 int days=15;
 int totaldays;
 cout<<"Enter name of person ";
 cin>>name;
 cout<<"enter target weight in kgs: ";
 cin>>weight;
 totaldays= days*weight ;
 cout<<name<<" wil need "<<totaldays<<" days to lose "<<weight<< " kilograms of weight by following doctor's suggestions";

} 