#include<iostream>
using namespace std;

bool test(int a,int b){
    if(a==b){
        return true;
    }
    else {
        return false;
    }
    
}
int main(){
    int a,b ;
    cin>>a>>b;
    cout<<test(a,b);
    return 0;

}