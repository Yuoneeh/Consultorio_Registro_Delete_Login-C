#include <stdio.h>

#include <windows.h>

#include <string.h>

#include <iostream>

#include <fstream>

#include "loginP.h"

using namespace std;

int main () {
  ofstream myfile;
  myfile.open ("example.txt");
  myfile << "Writing this to aaaa file.\n";
  myfile.close();
  return 0;
}
