#include <iostream>
using namespace std;
int main()
{

    // int i = 1;

    // i= i++ + ++i;
    // cout<<i<<endl;
    // int i = 1;
    // int j = 2;
    // int k;

    // k = i + j + i++ + j++ + ++i + ++j;
    // cout<<i<<" "<<j<<" "<<" "<<k<<endl;



    // int i =0;
    // i = i++ - --i + ++i - i--;
    // cout<<i<<endl;
     
    // int i =1, j=2, k=3;

    // int m = i-- - j-- - k--;

    // cout<<i<<endl;
    // cout<<j<<endl;
    // cout<<k<<endl;
    // cout<<m<<endl;

    // int i =10 ,j =20,k ;

    // k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

    // cout<<i<<endl;
    // cout<<j<<endl;
    // cout<<k<<endl;

    // return 0;


    // Q.1 Input a number n and tell whether it is equal to ,less than or more than 10.
    // int n;
    // cin>>n;

    // if(n>10){
    //     cout<<"More than 10"<<endl;
    // }else if(n <10){
    //     cout<<"Less than 10"<<endl;


    // }else{
    //     cout<<"Equal to 10"<<endl;
    // }
    // return 0;


    //Q.2 Write a program to output whether a number is divisible by both 2 and 3 or divisible by only one of them. 

    int n;
    cin>>n;

    if(n%2==0 && n%3==0) {
        cout<<"Divisible by both"<<endl;
    }else if(n%2==0){
        cout<<"Divisible by 2 only"<<endl;
    }else if(n%3==0){
        cout<<"Divisible by 3 only"<<endl;
    }
    else{
        cout<<"Divisible by none"<<endl;
    }
    return 0;
}