#include<iostream>
#include<algorithm>
#include <string> 
using namespace std ; 
int  main () {
    string str = "123456789" ;

    sort(str.begin() ,  str.end() ,greater<int>()) ;
    cout<<str<<endl ;
}