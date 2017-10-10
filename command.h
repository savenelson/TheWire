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
 */
#ifndef COMMAND_H
#define COMMAND_H

#include <string>
#include <sstream>
using namespace std;

//String Utilties Class
//Should this be done by sub-classing the <string> lib?

class Command
{
  public:
  static int scriptInput();
  static int userInput();

};

#endif
