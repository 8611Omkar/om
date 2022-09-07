#include <bits/stdc++.h>
using namespace std;

int decimalToBinary(int n)
{
    int x = 1;
    int ans = 0;

    while (x <= n)
    {
        x *= 2;
    }
    x /= 2;
    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 2;
        ans = ans * 10 + lastDigit;
    }
    return ans;
}
int decimalToOctal(int n)
{
    int x = 1;
    int ans = 0;
    while (x <= n)
    {
        x *= 8;
    }
    x /= 8;

    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 8;
        ans = ans * 10 + lastDigit;
    }
    return ans;
}
// int32_t main()
// {
//     int n;
//     cin >> n;
//     cout << decimalToOctal(n);
// }

string decimalToHexadecimal(int n){
    int x = 1;
    string ans = "";
    while(x<=n){
        x *= 16;
    }
    x/=16;
    while(x>0){
        int lastDigit=n/x;
        n -= lastDigit*x;
        x/=16;

        if(lastDigit <= 9){
            ans = ans + to_string(lastDigit);
            
        }
        else{
            char c = 'A'+ lastDigit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

// int32_t main(){
//     int n;
//     cin>>n;
//     cout<<decimalToHexadecimal(n)<<endl;
// }

int reverse(int n){
    int ans = 0;
    while(n>0){
        int lastDigit =n%10;
        ans =ans*10 + lastDigit;
        n /= 10;
    }
    return ans;
}
int addBinary(int a,int b){
    int ans = 0; int prevCarry=0;
    while(a>0 && b>0){
        if(a%2 == 0 && b%2 == 0){
            ans = ans*10 + prevCarry;
            prevCarry = 0;
        }
        else if((a%2 == 0 && b%2 == 1) || (a%2 == 1 && b%2 == 0)){
            if(prevCarry == 1){
                ans =ans*10 + 0;
                prevCarry = 1;
            }
            else{
                ans =ans*10 + 1;
                prevCarry = 0;
            }
        }
        else{

            ans = ans*10 + prevCarry;
            prevCarry = 1;
        }
        a /= 10; b /= 10;
    }
    while(a>0){
        if(prevCarry == 1){
            if(a%2 ==1){
                ans =ans*10+0;
                prevCarry =1;

            }
            else{
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        else
            ans =ans*10 + (a%2);
        a /= 10;
    }

    while(b>0){
        if(prevCarry == 1){
            if(b%2 == 1){
                ans = ans*10 + 0;
                prevCarry = 1;
            }
            else{
                ans =ans*10 + 1;
                prevCarry = 0;
            }
        }
        else
            ans =ans*10 + (b%2);
        b /=10;
    }

    if(prevCarry == 1)
        ans = ans*10 + 1;
    
    ans = reverse(ans);
    return ans;
    
}

int32_t main(){
    int a,b;
    cin>>a>>b;
    cout <<addBinary(a,b)<<endl;
}

