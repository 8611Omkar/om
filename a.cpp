#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans += i;
    return ans;
}
// int main(){
//     int n;
//     cin>>n;

//     cout<<sum(n)<<endl;
// }
bool check(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = y;
        c = z;
    }
    else
    {
        b = x;
        c = z;
    }
    if (a * a == b * b + c * c)
        return true;
    return false;
}

// int32_t main(){
//     int x , y , z;
//     cin>>x>>y>>z;

//     if(check(x,y,z)){
//         cout<<" Pythagorean triplets ";

//     }
//     else{
//         cout<<"Not a Pythagorean triplets ";
//     }
// }

int binaryToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += 2;
        n /= 10;
    }
    return ans;
}
int octalToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 8;
        n /= 10;
    }
    return ans;
}
// int32_t main(){

//     int n;
//     cin>>n;

//     cout<<octalToDecimal(n)<<endl;

// }

int hexadecimalToDecimal(string n)
{
    int ans = 0;
    int x = 1;

    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans += x * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans += x * (n[i] - 'A' + 10);
        }
        x *= 16;
    }
    return ans;
}
int32_t main()
{

    string n;
    
    cin >> n;

    cout << hexadecimalToDecimal(n) << endl;
}