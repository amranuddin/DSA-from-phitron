#include <bits/stdc++.h>
using namespace std;
int main() 
{
    vector <int> a; ///vector declare kora holo
    a.push_back(10);
    a.push_back(20);
     a.push_back(30);
    cout<< a.size() << " "; // sizee dewa holo abong ta print kora holo

    a.clear(); // aikane size clear kora holo
    cout<< a.size() << endl; // abar size print kore dekhano holo abong folafol aslo zzero 
    cout << a[1]; // mojar bisoy holo abar value access kore print kore print korano holo abong man aslo ager value
    return 0;
}