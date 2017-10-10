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


 #include <string>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;
#include "UI.h"




int UI::menuPrint()
{
	cout <<
	"\n"
	"\n"
	"\n"
  "                                        Hi esteemed user! Please input your request to use your music inventory in the following way\n"
  "================================================================================================\n"

  "                    Adding Information \n"

  "User: \n"
  "add*User*user_Id*name \n"
"\n"
  "Recordings:\n"
  "add*Recording*ID*Title*Artist*Producer*Year\n"
"\n"
  "Song\n"
  "add*Song*sID*title*composer(s) \n"
"\n"
  "Playlist\n"
  "add*Playlist*user_Id*playlist name"
"\n"
  "Track\n"
  "add*Track*AlbumID*songID*trackNumber \n"

  "================================================================================================\n"
  "                    Delete Information  \n"

  "User: \n"
  "delete*User*user_Id*name \n"
  "\n"
  "Recordings:\n"
  "delete*Recording*ID*Title*Artist*Producer*Year \n"
  "\n"
  "Songs\n"
  "delete*Song*sID*title*composer \n"
  "\n"
  "Playlist\n"
  "delete Playlist: user_Id*playlist name\n"
  "delete*playlist_track*user_id*playlist_name*song_id>\n"
     "\n"
  "Tracks\n"
  "delete*Track*AlbumIDsongID*trackNumber \n"




  "================================================================================================\n"
  "                    Show Information  \n"

  "   User: \n"
  "1. to list users by userID, type: \n"
    "show*User*user_Id\n"
      "\n"
  "2. to list users by name, type: \n"
	    "show*User*name\n"
    "\n"
  "3. to list users by userID and name, type: \n"
  "show*User*user_Id*name \n"

  "\n"
  "   Recordings:\n"
  "1. to list Recordings by ID, type: \n"
    "show*Recording*ID\n"
      "\n"
  "2. to list Recordings by Title, type: \n"
	    "show*Recording*Title\n"
    "\n"
  "3. to list Recordings by artist and name, type: \n"
  "show*Recording*Artist \n"
    "\n"
  "4. to list Recordings by producer, type: \n"
  "show*Recording*Producer\n"
      "\n"
  "5. to list Recordings by year, type: \n"
	    "show*Recording*Year\n"
    "\n"
  "6. to list Recordings by ID,title,artist,producer and year, type: \n"
  "show*Recording*ID*Title*Artist*Producer*Year \n"

  "\n"
  "   Song\n"
  "1. to list Song by sID, type: \n"
    "show*Song*sID \n"
    "\n"
  "2. to list Song by title, type: \n"
    "show*Song*title\n"
      "\n"
  "3. to list Song by composer, type: \n"
	    "show*Song*composer>\n"
	  "\n"
  "4. to list Song by all fields, type: \n"
   "show*Song*sID*title*composer \n"


  "\n"
  "   Playlist\n"
  "1. To list Playlist by user_Id, type: \n"
    "show*Playlist*user_Id \n"
    "\n"
  "2. To list Playlist by title, type: \n"
    "show*Playlist*playlist_name\n"
      "\n"
  "3. To list Playlist by all fields, type: \n"
    "show*Playlist*user_Id*playlist_name"


  "\n"
  "   Track\n"
  "1.to list Track by AlbumID, type: \n"
    "show*Track*AlbumID \n"
  "\n"
  "2. to list Track by songID, type: \n"
    "show*Track*songID\n"
      "\n"
  "3. to list Track by trackNumber, type: \n"
    "show*Track*trackNumber \n"
      "\n"
  "4. to list Track by all fields, type: \n"
  "show*Track*AlbumID*songID*trackNumber \n"
  ;
      cout << endl;
	return 0;
}
