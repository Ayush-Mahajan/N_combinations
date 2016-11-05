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
    for(i = 0 ; i< size ; i++) // give 1 as value to all the array elements
    {
        a[i] = 1 ;
    }
    
    for( j=1; a[0]<=num ;j++)
    {
        a[0] = j;
        for(k = 1 ; k<=j ; k++)  // controls the value of all the array element except 1st element
        {
            a[k] = a[0];
        } 
    
        sum =0;
        for( ; a[0]<num-1 ; a[0]+=1)  // controls the value of first array element
        {
            cout << a[0];
            sum += a[0];
            for(i = 0 ; (sum <= num)||( i==(j-1) ) ; i++) // controls the  number of times array elemts will be printed
            {
                cout << " + " << a[i];
                sum += a[i];
            }
            for(i = 0 ; sum <=num ; i++)
            {
                cout << " + 1";
                sum += 1;
            }
        }
        
        if( j == num )
        {
           cout<< a[0];
        }
    }
}




/* 1+1+1+1+1+1+1+1+1+1 |    2+2+2+1+1+1+1  
   2+1+1+1+1+1+1+1+1   |    3+2+2+1+1+1
   3+1+1+1+1+1+1+1     |    4+2+2+1+1
   4+1+1+1+1+1+1       |    5+2+2+1
   5+1+1+1+1+1         |    
-----------------------|----------------------
   2+2+1+1+1+1+1+1     |    3+3+3+1
   3+2+1+1+1+1+1       |    
   4+2+1+1+1+1         |    
   5+2+1+1+1           |    
-----------------------|----------------------
   3+3+1+1+1+1         |    
   4+3+1+1+1           |
   5+3+1+1             |
   6+3+1               |
   7+3                 |
   
   
