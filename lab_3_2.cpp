#include <iostream>
#include <limits>
using namespace std;

int main() {
  // เขียนโปรแกรมเพิ่ม เพื่อหาขนาดตัวแปรที่กำหนด
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of signed char:"<< sizeof(signed char)<< endl;
   cout << "Size of unsigned char:"<< sizeof(unsigned char)<< endl;
   cout << "Size of int:"<< sizeof(int)<< endl;
   cout << "Size of signed int:"<< sizeof(signed int)<< endl;
   cout << "Size of unsigned int:"<< sizeof(unsigned int)<< endl;
   cout << "Size of short int:"<< sizeof(short int)<< endl;
   cout << "Size of signed short int:"<< sizeof(signed short int)<< endl;
   cout << "Size of unsigned short int:"<< sizeof(unsigned short int)<< endl;
   cout << "Size of long int :"<< sizeof(long int )<< endl;
   cout << "Size of signed long int:"<< sizeof(signed long int)<< endl;
   cout << "Size of unsigned long int:"<< sizeof(unsigned long int)<< endl;
   cout << "Size of float:"<< sizeof(float)<< endl;
   cout << "Size of double:"<< sizeof(double)<< endl;
   cout << "Size of long double:"<< sizeof(long double)<< endl;
   cout << "Size of wchar_t :"<< sizeof(wchar_t)<< endl;
   cout << "Size of bool :"<< sizeof(bool)<< endl;
   cout << "Size of short signed int : " << sizeof(short signed int) << endl;
   cout << "Size of short unsigned int : " << sizeof(short unsigned int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;


   // เขียนโปรแกรมเพิ่มเพื่อหาช่วงของค่าที่เก็บได้
   cout << "Min of char  : " << numeric_limits<char>::min() << endl;
   cout << "Max of char  : " << numeric_limits<char>::max() << endl;

   cout << "Min of short int : " << numeric_limits<signed char>::min() << endl;
   cout << "Max of short int : " << numeric_limits<signed char>::max() << endl;

   cout << "Min of unsigned char : " << numeric_limits<unsigned char>::min() << endl;
   cout << "Max of unsigned char : " << numeric_limits<unsigned char>::max() << endl;

   cout << "Min of int : " << numeric_limits<int>::min() << endl;
   cout << "Max of int : " << numeric_limits<int>::max() << endl;

   cout << "Min of signed int : " << numeric_limits<signed int>::min() << endl;
   cout << "Max of signed int : " << numeric_limits<signed int>::max() << endl;

   cout << "Min of unsigned int : " << numeric_limits<unsigned int>::min() << endl;
   cout << "Max of unsigned int : " << numeric_limits<unsigned int>::max() << endl;

   cout << "Min of short int  : " << numeric_limits<short int>::min() << endl;
   cout << "Max of short int  : " << numeric_limits<short int>::max() << endl;

   cout << "Min of signed short int  : " << numeric_limits<signed short int>::min() << endl;
   cout << "Max of signed short int  : " << numeric_limits<signed short int>::max() << endl;

   cout << "Min of unsigned short int  : " << numeric_limits<unsigned short int>::min() << endl;
   cout << "Max of unsigned short int  : " << numeric_limits<unsigned short int>::max() << endl;

   cout << "Min of long int : " << numeric_limits<long int>::min() << endl;
   cout << "Max of long int : " << numeric_limits<long int>::max() << endl;

   cout << "Min of signed long int : " << numeric_limits<signed long int>::min() << endl;
   cout << "Max of signed long int : " << numeric_limits<signed long int>::max() << endl;

   cout << "Min of unsigned long int : " << numeric_limits<unsigned long int>::min() << endl;
   cout << "Max of unsigned long int : " << numeric_limits<unsigned long int>::max() << endl;

   cout << "Min of float : " << numeric_limits<float>::min() << endl;
   cout << "Max of float : " << numeric_limits<float>::max() << endl;

   cout << "Min of double : " << numeric_limits<double>::min() << endl;
   cout << "Max of double : " << numeric_limits<double>::max() << endl;

   cout << "Min of long double : " << numeric_limits<long double>::min() << endl;
   cout << "Max of long double : " << numeric_limits<long double>::max() << endl;

   cout << "Min of wchar_t : " << numeric_limits<wchar_t>::min() << endl;
   cout << "Max of wchar_t : " << numeric_limits<wchar_t>::max() << endl;

   cout << "Min of bool : " << numeric_limits<bool>::min() << endl;
   cout << "Max of bool : " << numeric_limits<bool>::max() << endl;
  return 0;
}
