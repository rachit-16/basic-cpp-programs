#include<iostream>
using namespace std;

int main()
{
    float n;
    cout<<"Input the numbet to find its square root: ";
    cin>>n;

    int p;
    cout<<"Enter the precision (no of decimal places) required in the answer: ";
    cin>>p;

    float ans = 0;
    int decimal = 0;
    float inc = 1;
    
    while(decimal <= p)
    {
        while(ans*ans <= n)
        {
            ans = ans + inc;
        }

        ans = ans - inc;
        inc = inc/10.0;
        decimal ++;
    }
    cout<<ans;

    return 0;    
}