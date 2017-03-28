#include "logging.h"

using namespace std;

string filename = "log1.log";

int main(int argv, char* argc[])
{
  Logger practice(filename);
  string str = "HelloWorld111\n";
  //Purpose: Test the logging file creation
  //TODO create a file with a header
  practice.write(str);
  practice.close();
  //TODO next create a file that logs 100
  //TODO Begin logging from a pin using wiringPi
  //TODO create interrupt loggin capabilities
  
  return 0;
}