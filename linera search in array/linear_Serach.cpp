#include<iostream>
using namespace std ;
int main(){
    int n ;
    cin >> n ;
    int arr[n];
    bool flag = 0 ; 

    for (int i = 0; i < n; i++)
    {
        cin>> arr[i] ; 
    }
    
    for (int i = 0; i < n; i++)
    {
        if( 8 == arr[i]){
            cout<< i ;
            cout<<endl ; 
            flag = 1;
        }
}

if (flag == 0)
{
            cout<<-1;
            cout<<endl ; 
}

}