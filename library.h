#include <iostream>
#include <string>
using namespace std;

struct Enrollment{
string major = "";
float noCollege = 0;
float someCollege = 0;
float gradCollege = 0;
};
void readFile(Enrollment []);
void display(Enrollment[],unsigned n);
double search(Enrollment a[], unsigned n,string major,string catagory);
void sort_by_major(Enrollment a[], unsigned n);
void sort_by_grad(Enrollment a[], int n);
void sort_by_nocollege(Enrollment a[], int n);