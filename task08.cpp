#include<iostream>
using namespace std;
main()
{
 float vegprice;
 float fruitprice;
 float totalveg, totalfruit;
 float coins=1.94;
 float earning;
 cout<<"Enter vegetable price per kg:  ";
 cin>>vegprice;
 cout<<"Enter fruit price per kg:  ";
 cin>>fruitprice;
 cout<<"Enter total kgs of vegetable:  ";
 cin>>totalveg;
 cout<<"Enter total kgs of friut:  ";
 cin>>totalfruit;
 earning= (vegprice*totalveg + fruitprice*totalfruit)/1.94;
 cout<<"Total earnings in rupees   "<<earning;

} 