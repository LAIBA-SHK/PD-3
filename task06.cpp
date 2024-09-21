#include<iostream>
using namespace std;
main()
{
 int size,cost,area;
 int costperpound;
 int costpersquarefoot;
 cout<<"Enter size of fertilizer bag per pound: ";
 cin>>size;
 cout<<"Enter cost of fertilizer bag: $";
 cin>>cost;
 cout<<"Enter area of in square feet: ";
 cin>>area;
 costperpound = cost/size;
 cout<<"cost per pound is  $"<<costperpound<<endl;
 costpersquarefoot = cost/area;
 cout<<"cost per square foot is  $"<<costpersquarefoot;

}