#ifndef LOGGING_H
#define LOGGING_H

#include <fstream>
#include <string>
#include <iostream>

using namespace std;

class Logger
{
  private:
  std::ofstream logFile;
  int logStatus;
  
  public:
  Logger(string);
  void log_start();
  int getStatus();
  void close();
  void write(string str);
};

Logger::Logger(string filename)
{
  this->logStatus = 0;
  this->logFile.open(filename.data());
}

void Logger::log_start()
{
  this->logStatus = 1;
}

int Logger::getStatus()
{
  return this->logStatus;
}

void Logger::write(string str)
{
  this->logFile << str.data();
}

void Logger::close()
{
  logFile.close();
}

#endif