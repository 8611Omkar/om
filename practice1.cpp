// Ques8. Write a program to find whether a given character is a vowel or a consonant.

// CPP program to check if a given character
// is vowel or consonant.
#include <iostream>
using namespace std;

// Function to check whether a character is
// vowel or not
void vowelOrConsonant(char x){
	if (x == 'a' || x == 'e' || x == 'i' ||	x == 'o' || x == 'u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U'){
		cout << "Vowel" << endl;
    }else{
		cout << "Consonant" << endl;
    }

}
// Driver code
int main()
{
    char x;
    cin>>x;

	vowelOrConsonant(x);
	return 0;

   
}
