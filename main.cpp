/*
In the codespace:
1) Set tab to 2
2) Set the ruler to 78 in settings.json "editor.rulers": [78]
3) Install C/C++ extension
5) Program to execute is  "program": "${workspaceFolder}/main",
*/
#include <iostream>
#include <fstream>

using namespace std;

// TODO#1: Create Rectangle struct
struct Rectangle {
  double mLength;
  double mWidth;
};


void writeRectangle (const Rectangle &rsRectangle, ostream &outStream);

bool readRectangle (Rectangle &rsRectangle, istream &inStream);

double rectangleArea (const Rectangle &rsRectangle);

int readAllRectangles (Rectangle sRectangles[], istream &inStream);

void writeAllRectangles (const Rectangle sRectangles[], ostream &outStream, 
  int numRectangles);

int main () {
  const int MAX_RECTANGLES = 100;
  const string FILE_NAME = "rectangles.txt";
  ifstream inStream;
  int numRectangles;
  Rectangle sRectangles[MAX_RECTANGLES];

  // TODO#2: Declare a single struct with length 5.0 and width 10.0
  //          using an initializer list


  cout << "Fun With Rectangles" << endl;

  // writeRectangle (sRectangle, cout);
  // cout << endl << endl;

  // cout << "Enter Rectangle length and width: ";
  // readRectangle (sRectangle, cin);
  // writeRectangle (sRectangle, cout);

  // cout << " Area = " << rectangleArea (sRectangle) << endl;

  inStream.open (FILE_NAME);
  if (inStream.fail ()) {
    cout << "Error Opening: " << FILE_NAME << endl;
    exit (1);
  }

  // numRectangles = readAllRectangles (sRectangles, inStream);
  inStream.close ();

  // writeAllRectangles (sRectangles, cout, numRectangles);

  cout << endl << endl;
  return EXIT_SUCCESS;
}

// TODO#3: Function definition for writeRectangle


// TODO#4: Function definition for readRectangle
//          NOTE: Return true if EOF; otherwise, false


// TODO#5: Function definition for rectangleArea


// TODO#6: Function definition for readAllRectangles
//          NOTE: Call readRectangle in your solution


// TODO#7: Function definition for writeAllRectangles
//          NOTE: Call writeRectangle in your solution
