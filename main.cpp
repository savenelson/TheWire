/* This program demonstrates reading strings from a text file
   To use the
   istream& getline (istream&  is, string& str);
   method requires compilation consistent with c++11
   not c++98 for example:
   g++ -g -Wall -std=c++11 main.cpp util.cpp UI.cpp command.cpp
*/
#include <sstream>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "command.h"
#include "UI.h"

using namespace std;

//Util util;

int main(){
	bool log;

	while(true){
		std::cout << "\n         ~-~-~   THE-WIRE SOUND APP   ~-~-~ " << std::endl;
		std::cout << "         COMMANDS:  .cmd to enter commands" << std::endl;
		std::cout << "                    .help for information" << std::endl;
		std::cout << "                    .logStart to start logging" << std::endl;
		std::cout << "                    .logStart to stop logging" << std::endl;
		std::cout << "                    .exit to quit" << std::endl;

			string userChoice;
			std::cin >> userChoice;

			if( userChoice == ".exit"){break;}

			else if(userChoice == ".help"){
				UI ui;
				ui.menuPrint();
			}
			else if(userChoice == ".logStart"){
				log = true; // use this flag to start logging the inputs of the user
			}
			else if(userChoice == ".logStop"){
				log = false; // use this flag to stop logging the inputs of the user
			} else if(userChoice == ".cmd" ){

		  std::cout << ".script or .user: " << std::endl;
			string scriptType;
			std::cin >> scriptType;

			if(scriptType == ".script"){
				Command com;
				com.scriptInput();
			} else if(scriptType == ".user"){ // else add in commands by individually
					Command com;
					com.userInput();
			} else {
		  	cout << "Please start over and enter the correct command format" << "\n";
		  }
		}
	}

  return(0);
}
