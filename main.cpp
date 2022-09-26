#include <iostream>
#include "library.h"
using namespace std;

int main() {
Enrollment enrollment[30];
string majorSearch;
string catagory;
string cat = " ";

  
readFile(enrollment);
display(enrollment,5);
cout << "Enter Major to search for: " << endl;
getline(cin,majorSearch);
cout << endl;
cout << "Enter catagory to search for: ";
cin>>cat;
//sort_by_major(enrollment,7);
  
search(enrollment,6,majorSearch,cat);
//sort_by_grad(enrollment, 15); 
//sort_by_nocollege(enrollment,7);
//display(enrollment,7);
  }