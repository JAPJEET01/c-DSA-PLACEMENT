#include <iostream>
using namespace std  ;
int main(){
    int n ; 
    cin >> n ;
    int arr[n] ; 
    int sum ;
    int max  ;

    for (int i = 0; i < n; i++)
    {
        cin>> arr[i] ;
    }
    
    for (int i = 0; i < n; i++)
    {
       for (int j = i; j < n; j++)
       {
        for (int k = i; k <= j; k++)
        {
            cout<<arr[k] << "," ;
            /* code */
        }

        if(sum > max ){
            max =  sum ;
        }
            sum = 0 ;
            sum += arr[i] ; 
       }
       cout<<endl;
        
    }
    cout<<"maximum total of arrys is : " <<max ;
}