#include <iostream>
using namespace std ;


class student{
    public : 
    string name ; 
    int age ;    
    bool gender ;    

} ; 

int main(){

student stuobj ;
cout<<"ENTER NAME : ";
cin>>stuobj.name ; 
cout<<"ENTER AGE : ";
cin>>stuobj.age ; 
cout<<"ENTER GENDER : ";
cin>>stuobj.gender ; 

cout<<stuobj.name << endl<< stuobj.age <<endl << stuobj.gender; 


}