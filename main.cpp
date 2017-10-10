/*
 * COMP 2404, Software Engineering, Carleton University, Dr. Louis Nel
 * Assignment 1 - Command Line Music Application
 * Names:             Student Numbers:
 * Sammy Diamanstein  101060342
 * David Nelson       100988784
 * OS: Bash on Ubuntu on Windows, Lubuntu VM
 * Date: October 10th, 2017
 * Files: main.cpp
 *        command.cpp command.h
 *        UI.cpp UI.h
 *        util.cpp util.h
 *        addall.txt
 *        testsome.txt
 *				testall.txt
 * Output: outputs include .txt files for logging and command running, and also
 *         user interface outputs for menu trasition
 * Compile: -g++ -g -Wall -std=c++11 main.cpp command.cpp UI.cpp util.cpp -o thewire
 * Errors: There is a current error regarding the boolean "log". On compilation
 *         this file throws the following warning: warning:
 *					 variable ‘log’ set but not used [-Wunused-but-set-variable]
 *				 This variable is included in this version, and is anticipated to be
 *				 used in the next release, so has stayed in the current build.
 * Example Output:
								~-~-~   THE-WIRE SOUND APP   ~-~-~
								COMMANDS:  .cmd to enter commands
								     .help for information
								     .logStart to start logging
								     .logStart to stop logging
								     .exit to quit
							>.cmd
							>.script or .user:
							>.user
							Enter command in the syntax as specified in .help
							>add*user*jwick9mm*John Wick
							user.add(User ID, User Name)
  				    User ID: jwick9mm
  						User Name: John Wick
							SUCCESS: user added
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
		std::cout << "                    .logStop to stop logging" << std::endl;
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
