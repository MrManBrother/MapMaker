//Author: MrManBrother (2020.09.13)
//Contact at mr.man.brother@gmail.com or MrManBrother on github for bugs

//c+cpp
#include <iostream>
#include <string>

//Local
#include "include/checkMakeDir.h"

int runMapMaker(std::string inConfigFileName)
{
  checkMakeDir check;
  if(!check.checkFileExt(inConfigFileName, ".config")) return 1;

  std::cout << "RUNMAPMAKER COMPLETE. return 0." << std::endl;
  return 0;
}

int main(int argc, char* argv[])
{
  if(argc != 2){
    std::cout << "Usage: ./bin/runMapMaker.exe <inConfigFileName>" << std::endl;
    std::cout << "TO DEBUG:" << std::endl;
    std::cout << " export DOGLOBALDEBUGROOT=1 #from command line" << std::endl;
    std::cout << "TO TURN OFF DEBUG:" << std::endl;
    std::cout << " export DOGLOBALDEBUGROOT=0 #from command line" << std::endl;
    std::cout << "return 1." << std::endl;
    return 1;
  }
 
  int retVal = 0;
  retVal += runMapMaker(argv[1]);
  return retVal;
}
