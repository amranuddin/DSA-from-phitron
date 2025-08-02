#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int N;
    cin>> N;
    vector <int> A(N);
    for (int i=0;i<N;i++)
    {
        cin >>A[i];
    }
    int fin=1;

    sort(A.begin(),A.end());


   for (int i=0;i<N-1;i++)
   {
    
        if (A[i]==A[i+1])
        {
            fin=0;
            break;
           
        }
        else 
        {
           fin=1;
         
        }
    
    
    
   }
    if (fin==0)
     {
        cout << "YES";

     }
     else
     {
        cout << "NO";
     }

   
}