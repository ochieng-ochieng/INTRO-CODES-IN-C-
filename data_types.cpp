#include<iostream>

using namespace std;

int main()
{
//signed types => represent both positive and negative values
signed short int num1 = 32768;
signed short int num2 = 32769;
signed short int num3 = 32770;

//usigned types represent only positive values and zero
unsigned short int num11 = 32768;
unsigned short int num22 = 32769;
unsigned short int num33 = 32770;
unsigned short int num44 = 65535;
unsigned short int num45 = 65536;
unsigned short int num46 = 65537;

//By default if not specified, the compiler asssumes unsigned
int num47 = -2147483648;
int num48 = -2147483649;
unsigned int num49 = 4294967295;
unsigned int num50 = 4294967296;
unsigned int num51 = 4294967297;

cout << "SIGNED SHORT INTERGERS :" << endl;
cout << "num1 : "  << num1;
cout << endl;
cout << "num2 : "  << num2;
cout << endl;
cout << "num3 : "  << num1;

cout << endl;
cout << endl;

cout << "UNSIGNED SHORT INTERGERS :" << endl;
cout << "num11 : "  << num11;
cout << endl;
cout << "num22 : "  << num22;
cout << endl;
cout << "num33 : "  << num33;
cout << endl;
cout << "num44 : "  << num44;
cout << endl;
cout << "num45 : "  << num45;
cout << endl;
cout << "num46 : "  << num46;
cout << endl;cout << endl;

cout << "DEFAULT IS ASSUMED SIGNED :" << endl;
cout << "num47 : "  << num47;
cout << endl;
cout << "num48 : "  << num48;
cout << endl;
cout << "num49 : "  << num49;
cout << endl;
cout << "num50 : "  << num50;
cout << endl;
cout << "num51 : "  << num51;
cout << endl;

return 0;
}
