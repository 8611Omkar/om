#include<iostream>
using namespace std;

// 1. linear time complexity O(n)
// int main(){
//     int n;
//     cin>>n;
//     int a = 0;
//     for(int i =1;i<=n;i++){
//         a =a+1;
//     }
// }

// 2. Quadratic time Complexity O(n^2)
// int main(){
//     int n;
//     cin>>n;
//     int a = 0;
//     for(int i =1;i<=n;i++){
//         for(int j =1;j<=n;j++){
//             a = a+1;
//         }
//     }

// }

// time complexity: O(n+m)
// int  main(){
//     int n,m;
//     cin>>n>>m;
//     int a = 0;
//     for(int i=1;i<=n;i++){
//         a =a+1;
//     }
//     for(int j=1;j<=m;j++){
//         a = a+1;
//     }
//     cout<<a;
// }


// Time Complexity: O(n*m)
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int a=0;
//     for(int i =1;i<=n;i++){
//         for(int j =1;j<=m;j++){
//             a = a + rand();
//         }
//     }
// }

// Time complexity: O(log(n))
int main(){
    int n;
    cin>>n;
    int a = 0,i =n;
    while(i>=1){
        a = a + 1;
        i /= 2;
    }
    cout<<a;
}