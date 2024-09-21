#include<iostream>
using namespace std;
main()
{
 float imposter;
 float player;
 float chances;
 cout<<"Enter Imposter count: ";
 cin>>imposter;
 cout<<"Enter player count: ";
 cin>>player;
 chances= 100*(imposter/player);
 cout<<"Chances of being an imposter: "<<chances<<"%";

}