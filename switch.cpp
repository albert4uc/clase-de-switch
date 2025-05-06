#include <iostream>
using namespace std;

int main(){


int salary,opcion;
double security = 0.3,AFP = 0.0725;

cout<<"welcome to you calculator for your salary"<<endl<<"please insert your base salary"<<endl;
cin>>salary;
cout<<"insert the number of opcion that you need to know"<<endl;
cout<<"1. social security discount"<<endl<<"2. discount by AFP"<<endl<<"3. salary income"<<endl<<"4. calculate all discounts"<<endl;
cin>>opcion;

switch (opcion)
{
case 1:
cout<<"your salary is"" "<<salary<<" ";
if (salary >= 1000)
{
cout<<"your discount is of 3%"<<" ""your salary is"" "<<salary - security;
}
else
{
    cout<<"tu salario es menor no se decuenta";
}

    break;
case 2 :

cout<<"your salary is"" "<<salary<<" ""your discount by AFP is"" "<<salary * AFP;
break;

case 3 :

if (salary  < 472.99)
{
    cout<<"no paha renta";
}


else if (salary <=825.24)
{
  int renta = salary - security * AFP ;  
    cout<< "your salary is"" "<<salary<<endl<<"su renta es de"" "<<renta * 0.10 ; 
}

else if (salary <= 2038.10)
{
    double renta = (salary - (salary * security) - (salary * AFP)) * 0.10;
cout<< "your salary is"" "<<salary<<endl<<"su renta es de"" "<<renta; 


}







break;

default:
    break;
}




























return 0 ;    
}