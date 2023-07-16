#include <iostream> 
#include  <string> 
#include <algorithm>
using namespace  std  ; 

int main () {
    string str =  "elosplamdmasmdmsaldmdjioEKFOIENFIOEJFENsjdsidsdiosj " ;
    // string CAPITALstr ;

    // for (int i = 0; i < str.length(); i++)
    // {
    //     if (str[i] >='a' || str[i]<='z')
    //     {
    //         str[i] -= 32 ;
    //     }
        
    // }
    // CAPITALstr =  str  ;
    
    
    // for (int i = 0; i < str.length(); i++)
    // {
    //     if (str[i] >='A' || str[i]<='Z')
    //     {
    //         str[i] += 32 ;
    //     }
        
    // }
    

    // cout<<CAPITALstr <<endl  ;
    // cout<<str << endl ;


    transform(str.begin(),str.end() , str.begin() , ::toupper) ;
    cout<<str<<endl ;

    transform(str.begin(),str.end() , str.begin() , ::tolower) ;
    cout<<str <<endl;


}