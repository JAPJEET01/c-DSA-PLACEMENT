#include <iostream>
using namespace std;

int biggest(int a, int b, int c)
{
    int big;
    int a_sqr = a*a;
    int b_sqr = b*b;
    int c_sqr = c*c;
    
    if (a > b)
    {
        if (a > c)
        {

            big = a;

        }
        else
        {

            big = c;
        }
    }
    else if (b > a)
    {
        if (b > c)
        {

            big = b;
        }
        else
        {

            big = c;
        }
    }

    if(big == a ){

        if((a*a) == ((b*b) + (c*c))){
            cout<<"YES IT IS A PYTHAGOREAN TRIPLET" ; 
        }
        else{
            cout<<" NO  IT IS NOT A A PYTHAGOREAN TRIPLET" ; 

        }

    }
    
    if(big == b ){

        if((b*b) == ((a*a) + (c*c))){
            cout<<"YES IT IS A PYTHAGOREAN TRIPLET" ; 
        }
        else{
            cout<<" NO  IT IS NOT A A PYTHAGOREAN TRIPLET" ; 

        }

    }
    
    if(big == c ){

        if((c*c) == ((a*a) + (b*b))){
            cout<<"YES IT IS A PYTHAGOREAN TRIPLET" ; 
        }
        else{
            cout<<" NO  IT IS NOT A A PYTHAGOREAN TRIPLET" ; 

        }

    }
return 0 ; 
}

int main()
{

    int a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;
    
    int ans = biggest(a,b,c) ; 
    cout<< ans ; 


}