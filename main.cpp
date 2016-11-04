#include<iostream.h>

using namespace std;

int main()
{
    int num, i, j, size =0;
    cout << "Enter a number - ";
    cin >> num;
    int num1 = num;
    for(i = 0 ; num1 >= 0 ; i++)
    {
        size = size + 1;
        num1 /= 10;
    }  
    
    int a[size], sum;
    
    for(i = 1 ; i< num-1 ; i++)
    {
        cout << i ;
        sum += i;
        for(j = 1 ; sum <= num ; j++)
        {
            cout << " + 1";
            sum += 1;
        }
    }   
}
