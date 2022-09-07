#include <iostream>
#include<math.h>
using namespace std;

int main() {
int n =153;
// cin>>n;
int sum=0;
int originaln=n;
while(n>0){
    // cout<<n <<" "<<sum<<endl;
int lastdigit = n%10;
sum =sum+ pow(lastdigit,3);
n=n/10;
cout<<n <<" " << pow(lastdigit,3) << " "<<sum<<endl;
}
if(sum==originaln){
cout<<"Armstrong number"<<endl;
}
else{
cout<<"not armstrong"<<endl;
}

return 0;
}



