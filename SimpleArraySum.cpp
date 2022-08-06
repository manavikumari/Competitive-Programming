// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

int32_t main()
{
    int number_of_elements ;
    cin >> number_of_elements ;
    int arr[number_of_elements]; // static 
    vector<int>v(number_of_elements); // dynamic
    int x ;
    int sum = 0;
    for (int i = 0 ; i < number_of_elements; i++) {
        cin >> x ; 
        sum += x ;
    }
    cout << sum << endl ;

    return 0 ;
}
/*  CODED BY:-
 _______________________________
|                              |
| |\  /|  /\  |\ |  /\  \  / | |
| | \/ | /~~\ | \| /~~\  \/  | |
|______________________________|

*/
