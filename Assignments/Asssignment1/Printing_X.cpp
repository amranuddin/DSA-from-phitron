#include <bits/stdc++.h>
using namespace std;
int main()
{

    int N;
    cin >> N;
    int space = N - 2;
    for (int i = 0; i < N / 2; i++)
    {

        for (int j = 0; j < i; j++)
     {
            cout << " ";
     }
            cout << "\\";
     
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
            cout << "/" << endl;

           
            space -= 2;
        
    
    }

    

for (int i = 0; i < N / 2; i++)
        cout << " ";
    cout << "X" << endl;
    
    space=1;


    for (int i = N/2-1; i>=0; i--)
    {

        for (int j = 0; j < i; j++)
     {
            cout << " ";
     }
            cout << "/";
     
        for (int j = 0; j < space; j++)



        {
            cout << " ";
        }
            cout << "\\" << endl;

           
            space += 2;
        
    


    }

    
}