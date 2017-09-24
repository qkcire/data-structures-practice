#include "StringLinkedList.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
  StringLinkedList a;
  a.addFront("MSP");
  a.addFront("LAX");
  
  cout << "Front of a: " << a.front() << '\n';
  cout << "Removing front of a.\n";
  a.removeFront();
  cout << "Front of a: " << a.front() << '\n';
  //cout << "Hello, world!\n";
}