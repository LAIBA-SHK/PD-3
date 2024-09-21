#include<iostream>
using namespace std;
main()
{
 string movie;
 int adultprice, childprice;
 int adultticket,childticket;
 int charityper;
 int totalamount, charity, remaining;
 cout<<"Enter movie name: ";
 cin>>movie;
 cout<<"Enter adult ticket price: $";
 cin>>adultprice;
 cout<<"Enter child ticket price: $";
 cin>>childprice;
 cout<<"Enter no. of adult tickets sold: ";
 cin>>adultticket;
 cout<<"Enter no. of child tickets sold: ";
 cin>>childticket;
 cout<<"Enter percentage of charity amount: ";
 cin>>charityper;
 cout<<"Movie: "<<movie<<endl;
 totalamount = adultprice*adultticket + childprice*childticket;
 cout<<"Total amount generated  $"<<totalamount<<endl;
 charity = (totalamount/100)*0.10;
 cout<<"Donation to charity: $"<<charity<<endl;
 remaining= totalamount-charity;
 cout<<"Remaining amount after donation: $"<<remaining<<endl;

} 

 
 