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
 *        showoff.txt
 *//* * * * * * * * * * * * * * * * * * * * * * ** * */
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

#include <string>
#include <sstream>
using namespace std;
#include "util.h"

string Util::trim(const string & s) {

	//trim returns a trimmed version of s
	//trim removes leading and trailing white space
	//AND also removes repeated white space between words

	stringstream stream(s);
	string trimmedString;
	stream >> trimmedString;  //grab first word
	string buffer;
	while (stream >> buffer){
       trimmedString.append(" " + buffer);
	}
	return trimmedString;
}

string Util::toTitleCase(const string & s) {

	//Return a title-cased version of s
	//In Title Case each word should start with a captial letter
	//and the remaining letters should be lower case.
	//Also strings starting with "The " will have that replaced
	//with ", The" at the end of the string.
	//e.g. "The Girl From Ipanema" becomes "Girl From Ipanema, The"
    //Note this function effectively does a trim() operation as well

	stringstream stream(s);
	string buffer;
    string titleCasedString;
	while (stream >> buffer){
		buffer = Util::toLowerCase(buffer);
        buffer[0] = toupper(buffer[0]);
		titleCasedString.append(" " + buffer);
	}
	//strip off leading blank
	titleCasedString = Util::trim(titleCasedString);

    if(Util::startsWith(titleCasedString, "The ")) {
       titleCasedString = titleCasedString.substr(4,titleCasedString.length() -4) + ", The";
    }
	return titleCasedString;
}

string Util::toUpperCase(const string & s){
	string upperCaseString;
    for(string::const_iterator itr=s.begin(); itr != s.end(); ++itr){
		upperCaseString.append(1,toupper(*itr));
	}
	return upperCaseString;
}

string Util::toLowerCase(const string & s){
	string lowerCaseString;
    for(string::const_iterator itr=s.begin(); itr != s.end(); ++itr){
		lowerCaseString.append(1,tolower(*itr));
	}
	return lowerCaseString;
}

bool Util::startsWith(const string & s, const string & prefix){
	//answer whether s starts with prefix
	if(prefix.length() > s.length()) return false;
	return (prefix.compare(s.substr(0, prefix.length())) == 0);
}

bool Util::endsWith(const string & s, const string & suffix){
	//answer whether s ends with suffix
	if(suffix.length() > s.length()) return false;
	return (suffix.compare(s.substr(s.length()-suffix.length(), suffix.length())) == 0);
}
bool Util::isComment(const string & s){
	//answer whether s is a comment string
	//comment strings start with "//" prefix

	string trimmed = Util::trim(s);
    string commentPrefix = "//";
	return Util::startsWith(trimmed, commentPrefix);
}
