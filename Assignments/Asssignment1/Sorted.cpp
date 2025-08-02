#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        vector <int > A(N);
        
        for (int j=0;j<N;j++)
          {
            cin>>A[j];
          }
          vector <int> C(A);

       sort(A.begin(),A.end());
       int flag=0;
        for (int j=0;j<N;j++)
          {
           if (A[j]!=C[j])
           {
           flag=1;
           break;
           }
          }
          if (flag==1)
          {
            cout <<"NO" << endl;
          }
          else
          {
            cout <<"YES" << endl;
          }
    }

    return 0;
}