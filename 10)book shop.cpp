#include <iostream>
#include <cstring>
using namespace std;

class Media {
protected:
   char title[64];
   char publication[64];

public:

virtual void read () {
cin.ignore(1000, '\n');
cout<<"Enter title   :";
cin.getline(title,64);
cout<<"enter publication:"
cin.getline(publication,64);
}

virutal void show () {
          cout << "title     :"<< title <<"\n";
          cout << "publication :" << publication <<"\n"; }

          virtual 
   
