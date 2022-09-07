// Print all the factors of input number.

#include <iostream>
using namespace std;
// int main()
// {
//     int n, i;
//     cin >> n;

//     cout << "All the factors of " << n << " are :" << endl;
//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << i << endl;
//         }
//     }
//     cout << endl;

//     return 0;
// }

// factorial no.
int main(){
    int n ,i;
    cin>>n;
    int count = 1;
    for(int i = 1; i <= n;i++){

        
        count++;
        count *=i;

        cout<<count<<endl;
    }
    return 0;
}