#include "library.h"
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

void display(Enrollment a[], unsigned n) {
  int size = 0;
  int length = 0;
  cout << setw(22) << "No" << setw(10) << "Some" << setw(8) << "BA OR" << endl;
  cout << "Major" << setw(20) << " College" << setw(8) << " College" << setw(7)
       << " Above" << endl;
  cout << "=========================================" << endl;
  for (int i = 0; i <= 6; i++) {
    cout << a[i].major << setw(10) << a[i].noCollege << "% " << setw(5)
         << a[i].someCollege << "% " << setw(7) << a[i].gradCollege << "% "
         << endl;
  }
}

void readFile(Enrollment a[]) {
  ifstream myfile;
  int i = 0;
  int count = 0;
  myfile.open("spring2022.csv");

  for (int i = 0; i <= 6; i++) {

    getline(myfile, a[i].major, ',');

    myfile >> a[i].noCollege;
    myfile.ignore();
    myfile >> a[i].someCollege;
    myfile.ignore();
    myfile >> a[i].gradCollege;
  }
}
double search(Enrollment a[], unsigned n, string major, string catagory) {
  ;

  cout << a[5].major << "test major" << endl;

  for (int i = 0; i <= 7; i++) {
    // cout << a[i].major;
    string to_string(a[i].major);
    if (major == a[i].major)

    {
      cout << "Major found!" << endl;

      if (catagory == "nocollege") {
        cout << a[i].noCollege << endl;
        break;
      } else if (catagory == "somecollege") {
        cout << a[i].someCollege << endl;
        break;
      } else if (catagory == "gradcollege") {
        cout << a[i].gradCollege << endl;
        break;
      }
    }
  }
  // cout << "No major found!" << endl;

  return 0;
}
void sort_by_major(Enrollment a[], unsigned n) {
  {
    for (int i = n - 1; i > 0; i--) {
      for (int j = n - 1; j >= n - i; j--) {
        if (a[j].major > a[j - 1].major) {
          swap(a[j].major, a[j - 1].major);
        }
      }
      for (int k = 0; k <= 6; k++) {
        cout << a[k].major << " ";
      }
    }
  }
}

void sort_by_grad(Enrollment a[], int n) {
  for (int i = 1; i < n; i++) {
    for (int j = i; j > 0; j--) {
      if (a[j - 1].gradCollege < a[j].gradCollege) {
        swap(a[j - 1], a[j]);
      }
    }
  }
}

void sort_by_nocollege(Enrollment a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int min_index = i;
    for (int j = i + 1; j < n; j++) {
      if (a[min_index].noCollege < a[j].noCollege) {
        min_index = j;
      }
    }
    swap(a[i], a[min_index]);
  }
}
