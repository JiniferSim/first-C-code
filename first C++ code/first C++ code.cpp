#include <iostream>
using namespace std;//To be able display the text using cout & endl / \n

int main()
{
   cout << "What is your name?" << endl; //Display th text
   string name;
   cin >> name;
   cout << "Hello " << name << ", how are you today?\n";

   int x = 25;
   cout << "The value " << x << " is stored in address" << &x << endl;
   cout << "The value " << name << " is stored in address" << &name << endl;
}