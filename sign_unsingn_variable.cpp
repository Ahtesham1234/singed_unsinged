//sign_unsingn_variable.cpp
//tests singned and unsigned integers

#include <iostream>

using namespace std;

int main()
{
int signedVar = 1500000000;     //singed
unsinged int unsingedVar = 1500000000;  //unsinged

singedVar = (singedVar *2 )/3; //calculation exceeds rangs
unsingedVar = (unsingedVar *2)/3 ;      // calculation within range 

cout<< "singedVar =   " << singedVar <<endl ; //wrong
cout << "unsingedVar = "  unsignVar << endl ; //ok
 
return 0;
 
}
