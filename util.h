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

  USED WITH PERMISSION BY:
 *//* * * * * * * * * * * * * * * * * * * * * ** * * */
/*                                                   */
/*  Program:  MyTunes Music Player                   */
/*  Author:   Louis Nel                              */
/*  Date:     21-SEP-2017                            */
/*                                                   */
/*  (c) 2017 Louis Nel                               */
/*  All rights reserved.  Distribution and           */
/*  reposting, in part or in whole, requires         */
/*  written consent of the author.                   */
/*                                                   */
/*  COMP 2404 students may reuse this content for    */
/*  their course assignments without seeking consent */
/* * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef UTIL_H
#define UTIL_H

#include <string>
#include <sstream>
using namespace std;

//String Utilties Class
//Should this be done by sub-classing the <string> lib?

class Util
{
  public:
  static string trim(const string & s);
  static string toTitleCase(const string & s);
  static string toUpperCase(const string & s);
  static string toLowerCase(const string & s);
  static bool startsWith(const string & s, const string & prefix);
  static bool endsWith(const string & s, const string & suffix);
  static bool isComment(const string & s);
};

#endif
