#include<iostream>
using namespace std;
int persistence(long long n)
{
  long long N = n;
    int All_multiplication_operations =0;
    while (N >9 )
    {
      long long Sum =1;      
      string Str= to_string(N);
        for(char&C:Str)
        {
            Sum*=(C-'0');
        }
        N = Sum;
        All_multiplication_operations++;
    }
    return All_multiplication_operations;
}

int main()
{
    int total = persistence(999);
    cout<<"Total M = "<<total<<endl;
 system("pause>0");
}