// Ques2. Write a program to print all the digits of a positive decimal number from right to left.

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
int n;
cin >> n;
while (n > 0)
{
int rem = n % 10;
cout << rem << " \n ";
n = n / 10;
}
return 0;
}