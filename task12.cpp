#include<iostream>
using namespace std;
main()
{
  int n,w,h,walls;
  cout<<"Enter no. of square meters: ";
  cin>>n;
  cout<<"Enter height of wall: ";
  cin>>h;
  cout<<"Enter width of wall: ";
  cin>>w;
  walls= n/(w*h);
  cout<<"Number of walls you can paint: "<<walls;
 

}