/* This program demonstrates reading strings from a text file
   To use the
   istream& getline (istream&  is, string& str);
   method requires compilation consistent with c++11
   not c++98 for example:
   g++ -g -Wall -std=c++11 main.cpp util.cpp
*/
#include <sstream>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "util.h"
#include "command.h"
#include "UI.h"

using namespace std;

Util util;
UI ui;

int Command::userInput(){


	cout << "Please enter your command in the syntax as specified in .help" << "\n";
	string individualComm;
	std::cin >> individualComm;
	// hold off until dave figures out how to parse a string into its indidual elements

	std::stringstream test(individualComm);
	std::string segment;
	std::vector<std::string> seglist;

	while(std::getline(test, segment, '*'))
	{
   seglist.push_back(segment);
	}

	if (seglist[0] == "add") {
	    if ((seglist[1] == "recording") && (seglist.size() == 6)) {
	        //recording.add(seglist[2],seglist[3],seglist[4],seglist[4]);
	        cout << "recording.add(Recording ID, Recording Title, Artist, Year)" << endl;
	        cout << "    Recording ID: " << seglist[2] << endl;
	        cout << "    Recording Title: " <<  seglist[3] << endl;
	        cout << "    Artist: " <<  seglist[4] << endl;
	        cout << "    Year: " <<  seglist[5] << endl;
					cout << "    SUCCESS: recording added \n" << endl;
	    } else if ((seglist[1] == "song") && (seglist.size() == 5)) {
	       //song.add(seglist[2],seglist[3],seglist[4]);
	       cout << "song.add(Song ID, Song Title, Composer)" << endl;
	       cout << "    Song ID: " << seglist[2] << endl;
	       cout << "    Song Title: " <<  seglist[3] << endl;
	       cout << "    Composer: " <<  seglist[4] << endl;
				 cout << "    SUCCESS: song added \n" << endl;
	    } else if ((seglist[1] == "track") && (seglist.size() == 5)) {
	        //track.add(seglist[2],seglist[3],seglist[4]);
	        cout << "track.add(Album ID, Song ID, Track #)" << endl;
	        cout << "    Album ID: " << seglist[2] << endl;
	        cout << "    Song ID: " <<  seglist[3] << endl;
	        cout << "    Track #: " <<  seglist[4] << endl;
					cout << "    SUCCESS: track added \n" << endl;
	    } else if ((seglist[1] == "user") && (seglist.size() == 4)) {
	        //user.add(seglist[2],seglist[3]);
	        cout << "user.add(User ID, User Name)" << endl;
	        cout << "    User ID: " << seglist[2] << endl;
	        cout << "    User Name: " <<  seglist[3] << endl;
					cout << "    SUCCESS: user added \n" << endl;
	    } else if ((seglist[1] == "playlist") && (seglist.size() == 5)) {
	        //playlist.add(seglist[2],seglist[3],seglist[4]);
	        cout << "playlist.add(User ID, Playlist Name)" << endl;
	        cout << "    User ID: " << seglist[2] << endl;
	        cout << "    Playlist Name: " <<  seglist[3] << endl;
					cout << "    SUCCESS: playlist added \n" <<  endl;
	    } else if ((seglist[1] == "playlisttrack") && (seglist.size() == 5)) {
	        //playlisttrack.add(seglist[2],seglist[3],seglist[4]);
	        cout << "playlisttrack.add(User ID, Playlist Name, Song ID)" << endl;
	        cout << "    User ID: " << seglist[2] << endl;
	        cout << "    Playlist Name: " <<  seglist[3] << endl;
	        cout << "    Song ID: " <<  seglist[4] << endl;
					cout << "    SUCCESS:  playlist track added \n" <<  endl;
	    } else { cout << "ERROR! command is not recognized. " << endl;
			};
	  }  else if (seglist[0] == "delete") {
	    if ((seglist[1] == "recording") && (seglist.size() == 6)) {
	        //recording.delete(seglist[2],seglist[3],seglist[4],seglist[4],seglist[5])
	        cout << "recording.delete(Recording ID, Recording Title, Artist, Year)" << endl;
	        cout << "    Recording ID: " << seglist[2] << endl;
	        cout << "    Recording Title: " <<  seglist[3] << endl;
	        cout << "    Artist: " <<  seglist[4] << endl;
	        cout << "    Year: " <<  seglist[5] << endl;
					cout << "    SUCCESS: recording deleted \n" <<  endl;
	    } else if ((seglist[1] == "song") && (seglist.size() == 5)) {
	        //song.delete(seglist[2],seglist[3],seglist[4]);
	        cout << "song.delete(Song ID, Song Title, Composer)" << endl;
	        cout << "    Song ID: " << seglist[2] << endl;
	        cout << "    Song Title: " <<  seglist[3] << endl;
	        cout << "    Composer: " <<  seglist[4] << endl;
					cout << "    SUCCESS: song deleted \n" <<  endl;
	    } else if ((seglist[1] == "track") && (seglist.size() == 5)) {
	        //track.delete(seglist[2],seglist[3],seglist[4]);
	        cout << "track.delete(Album ID, Song ID, Track #)" << endl;
	        cout << "    Album ID: " << seglist[2] << endl;
	        cout << "    Song ID: " <<  seglist[3] << endl;
	        cout << "    Track #: " <<  seglist[4] << endl;
					cout << "    SUCCESS: track deleted \n" <<  endl;
	    } else if ((seglist[1] == "user") && (seglist.size() == 4)) {
	        //user.delete(seglist[2],seglist[3]);
	        cout << "user.delete(User ID, User Name)" << endl;
	        cout << "    User ID: " << seglist[2] << endl;
	        cout << "    User Name: " <<  seglist[3] << endl;
					cout << "    SUCCESS: user deleted \n" <<  endl;
	    } else if ((seglist[1] == "playlist") && (seglist.size() == 4)) {
	        //playlist.delete(seglist[2],seglist[3]);
	        cout << "playlist.delete(User ID, Playlist Name)" << endl;
	        cout << "    User ID: " << seglist[2] << endl;
	        cout << "    Playlist Name: " <<  seglist[3] << endl;
					cout << "    SUCCESS: playlist deleted \n" <<  endl;
	    } else if ((seglist[1] == "playlisttrack") && (seglist.size() == 5)) {
	        //playlisttrack.delete(seglist[2],seglist[3]);
	        cout << "playlisttrack.delete(User ID, Playlist Name, Song ID)" << endl;
	        cout << "    User ID: " << seglist[2] << endl;
	        cout << "    Playlist Name: " <<  seglist[3] << endl;
	        cout << "    Song ID: " <<  seglist[4] << endl;
					cout << "    SUCCESS: playlist track deleted \n" <<  endl;
	    } else { cout << "ERROR! command is not recognized. " << endl;
			};
	} else if (seglist[0] == "show") {
	    if ((seglist[1] == "recording") && (seglist.size() == 6)) {
	      //recording.show(seglist[2],seglist[3],seglist[4],seglist[4],seglist[5])
	      cout << "recording.show(Recording ID, Recording Title, Artist, Year)" << endl;
	      cout << "    Recording ID: " << seglist[2] << endl;
	      cout << "    Recording Title: " <<  seglist[3] << endl;
	      cout << "    Artist: " <<  seglist[4] << endl;
	      cout << "    Year: " <<  seglist[5] << endl;
				cout << "    SUCCESS: recoring has been shown \n" <<  endl;
	    } else if ((seglist[1] == "song") && (seglist.size() == 5)) {
	      //song.show(seglist[2],seglist[3],seglist[4]);
	      cout << "song.show(Song ID, Song Title, Composer)" << endl;
	      cout << "    Song ID: " << seglist[2] << endl;
	      cout << "    Song Title: " <<  seglist[3] << endl;
	      cout << "    Composer: " <<  seglist[4] << endl;
				cout << "    SUCCESS: song has been shown \n" <<  endl;
	    } else if ((seglist[1] == "track") && (seglist.size() == 5)) {
	      //track.show(seglist[2],seglist[3],seglist[4]);
	      cout << "track.show(Album ID, Song ID, Track #)" << endl;
	      cout << "    Album ID: " << seglist[2] << endl;
	      cout << "    Song ID: " <<  seglist[3] << endl;
	      cout << "    Track #: " <<  seglist[4] << endl;
				cout << "    SUCCESS: track has been shown \n" <<  endl;
	    } else if ((seglist[1] == "user") && (seglist.size() == 4)) {
	      //user.show(seglist[2],seglist[3]);
	      cout << "user.show(User ID, User Name)" << endl;
	      cout << "    User ID: " << seglist[2] << endl;
	      cout << "    User Name: " <<  seglist[3] << endl;
				cout << "    SUCCESS: user has been shown \n" <<  endl;
	    } else if ((seglist[1] == "playlist") && (seglist.size() == 4)) {
	      //playlist.show(seglist[2],seglist[3]);
	      cout << "playlist.show(User ID, Playlist Name)" << endl;
	      cout << "    User ID: " << seglist[2] << endl;
	      cout << "    Playlist Name: " <<  seglist[3] << endl;
				cout << "    SUCCESS: playlist has been shown \n" <<  endl;
	    } else if ((seglist[1] == "playlisttrack") && (seglist.size() == 5)) {
	      //playlisttrack.show(seglist[2],seglist[3]);
	      cout << "playlisttrack.show(User ID, Playlist Name, Song ID)" << endl;
	      cout << "    User ID: " << seglist[2] << endl;
	      cout << "    Playlist Name: " <<  seglist[3] << endl;
	      cout << "    Song ID: " <<  seglist[4] << endl;
				cout << "    SUCCESS: playlist track has been shown \n" <<  endl;
	    };
	} else if (seglist[0] == ".help") {
		ui.menuPrint();
	} else { cout << "ERROR! command is not recognized. " << endl;
	         cout << "Please ensure youve seperated input fields using *" << endl;
	}
	return 0;
} // END of Command::userInput()

int Command::scriptInput(){

  vector<string> subStrings, subCopy;

  string input;

  cout << "Enter an input file name: " << endl;
  string fInName;
  cin >> fInName;

	cout << "Enter an output file name: " << endl;
	string fOutName;
	cin >> fOutName;

  std::cout << "The names are: " << fInName << " and " << fOutName << std::endl;

  ifstream fileIn(fInName, ifstream::in);
  ofstream fileOut(fOutName, ofstream::out);

  if(!fileIn){ //THIS IS BLACKED CUZ ERRORS
   cout << "ERROR: could not open file " << input << "  ...exiting\n";
   return(0);
  }



//COMMENT
  while(getline(fileIn, input)){




    stringstream ss(input);
    string currentWord, temp1, temp2, temp3, tempNoD;


    while (getline(ss, currentWord, '*')){
        subStrings.push_back(util.trim(currentWord));
    }


		if (subStrings[0] == "add") {
		    if ((subStrings[1] == "recording") && (subStrings.size() == 6)) {
		        //recording.add(subStrings[2],subStrings[3],subStrings[4],subStrings[4]);
		        cout << "recording.add(Recording ID, Recording Title, Artist, Year)" << endl;
		        cout << "    Recording ID: " << subStrings[2] << endl;
		        cout << "    Recording Title: " <<  subStrings[3] << endl;
		        cout << "    Artist: " <<  subStrings[4] << endl;
		        cout << "    Year: " <<  subStrings[5] << endl;
		        cout << "    SUCCESS: recording added \n" << endl;
		    } else if ((subStrings[1] == "song") && (subStrings.size() == 5)) {
		       //song.add(subStrings[2],subStrings[3],subStrings[4]);
		       cout << "song.add(Song ID, Song Title, Composer)" << endl;
		       cout << "    Song ID: " << subStrings[2] << endl;
		       cout << "    Song Title: " <<  subStrings[3] << endl;
		       cout << "    Composer: " <<  subStrings[4] << endl;
		       cout << "    SUCCESS: song added \n" << endl;
		    } else if ((subStrings[1] == "track") && (subStrings.size() == 5)) {
		        //track.add(subStrings[2],subStrings[3],subStrings[4]);
		        cout << "track.add(Album ID, Song ID, Track #)" << endl;
		        cout << "    Album ID: " << subStrings[2] << endl;
		        cout << "    Song ID: " <<  subStrings[3] << endl;
		        cout << "    Track #: " <<  subStrings[4] << endl;
		        cout << "    SUCCESS: track added \n" << endl;
		    } else if ((subStrings[1] == "user") && (subStrings.size() == 4)) {
		        //user.add(subStrings[2],subStrings[3]);
		        cout << "user.add(User ID, User Name)" << endl;
		        cout << "    User ID: " << subStrings[2] << endl;
		        cout << "    User Name: " <<  subStrings[3] << endl;
		        cout << "    SUCCESS: user added \n" << endl;
		    } else if ((subStrings[1] == "playlist") && (subStrings.size() == 5)) {
		        //playlist.add(subStrings[2],subStrings[3],subStrings[4]);
		        cout << "playlist.add(User ID, Playlist Name)" << endl;
		        cout << "    User ID: " << subStrings[2] << endl;
		        cout << "    Playlist Name: " <<  subStrings[3] << endl;
		        cout << "    SUCCESS: playlist added \n" <<  endl;
		    } else if ((subStrings[1] == "playlisttrack") && (subStrings.size() == 5)) {
		        //playlisttrack.add(subStrings[2],subStrings[3],subStrings[4]);
		        cout << "playlisttrack.add(User ID, Playlist Name, Song ID)" << endl;
		        cout << "    User ID: " << subStrings[2] << endl;
		        cout << "    Playlist Name: " <<  subStrings[3] << endl;
		        cout << "    Song ID: " <<  subStrings[4] << endl;
		        cout << "    SUCCESS:  playlist track added \n" <<  endl;
		    } else { cout << "ERROR! command is not recognized. " << endl;
		    };
		  }  else if (subStrings[0] == "delete") {
		    if ((subStrings[1] == "recording") && (subStrings.size() == 6)) {
		        //recording.delete(subStrings[2],subStrings[3],subStrings[4],subStrings[4],subStrings[5])
		        cout << "recording.delete(Recording ID, Recording Title, Artist, Year)" << endl;
		        cout << "    Recording ID: " << subStrings[2] << endl;
		        cout << "    Recording Title: " <<  subStrings[3] << endl;
		        cout << "    Artist: " <<  subStrings[4] << endl;
		        cout << "    Year: " <<  subStrings[5] << endl;
		        cout << "    SUCCESS: recording deleted \n" <<  endl;
		    } else if ((subStrings[1] == "song") && (subStrings.size() == 5)) {
		        //song.delete(subStrings[2],subStrings[3],subStrings[4]);
		        cout << "song.delete(Song ID, Song Title, Composer)" << endl;
		        cout << "    Song ID: " << subStrings[2] << endl;
		        cout << "    Song Title: " <<  subStrings[3] << endl;
		        cout << "    Composer: " <<  subStrings[4] << endl;
		        cout << "    SUCCESS: song deleted \n" <<  endl;
		    } else if ((subStrings[1] == "track") && (subStrings.size() == 5)) {
		        //track.delete(subStrings[2],subStrings[3],subStrings[4]);
		        cout << "track.delete(Album ID, Song ID, Track #)" << endl;
		        cout << "    Album ID: " << subStrings[2] << endl;
		        cout << "    Song ID: " <<  subStrings[3] << endl;
		        cout << "    Track #: " <<  subStrings[4] << endl;
		        cout << "    SUCCESS: track deleted \n" <<  endl;
		    } else if ((subStrings[1] == "user") && (subStrings.size() == 4)) {
		        //user.delete(subStrings[2],subStrings[3]);
		        cout << "user.delete(User ID, User Name)" << endl;
		        cout << "    User ID: " << subStrings[2] << endl;
		        cout << "    User Name: " <<  subStrings[3] << endl;
		        cout << "    SUCCESS: user deleted \n" <<  endl;
		    } else if ((subStrings[1] == "playlist") && (subStrings.size() == 4)) {
		        //playlist.delete(subStrings[2],subStrings[3]);
		        cout << "playlist.delete(User ID, Playlist Name)" << endl;
		        cout << "    User ID: " << subStrings[2] << endl;
		        cout << "    Playlist Name: " <<  subStrings[3] << endl;
		        cout << "    SUCCESS: playlist deleted \n" <<  endl;
		    } else if ((subStrings[1] == "playlisttrack") && (subStrings.size() == 5)) {
		        //playlisttrack.delete(subStrings[2],subStrings[3]);
		        cout << "playlisttrack.delete(User ID, Playlist Name, Song ID)" << endl;
		        cout << "    User ID: " << subStrings[2] << endl;
		        cout << "    Playlist Name: " <<  subStrings[3] << endl;
		        cout << "    Song ID: " <<  subStrings[4] << endl;
		        cout << "    SUCCESS: playlist track deleted \n" <<  endl;
		    } else { cout << "ERROR! command is not recognized. " << endl;
		    };
		} else if (subStrings[0] == "show") {
		    if ((subStrings[1] == "recording") && (subStrings.size() == 6)) {
		      //recording.show(subStrings[2],subStrings[3],subStrings[4],subStrings[4],subStrings[5])
		      cout << "recording.show(Recording ID, Recording Title, Artist, Year)" << endl;
		      cout << "    Recording ID: " << subStrings[2] << endl;
		      cout << "    Recording Title: " <<  subStrings[3] << endl;
		      cout << "    Artist: " <<  subStrings[4] << endl;
		      cout << "    Year: " <<  subStrings[5] << endl;
		      cout << "    SUCCESS: recoring has been shown \n" <<  endl;
		    } else if ((subStrings[1] == "song") && (subStrings.size() == 5)) {
		      //song.show(subStrings[2],subStrings[3],subStrings[4]);
		      cout << "song.show(Song ID, Song Title, Composer)" << endl;
		      cout << "    Song ID: " << subStrings[2] << endl;
		      cout << "    Song Title: " <<  subStrings[3] << endl;
		      cout << "    Composer: " <<  subStrings[4] << endl;
		      cout << "    SUCCESS: song has been shown \n" <<  endl;
		    } else if ((subStrings[1] == "track") && (subStrings.size() == 5)) {
		      //track.show(subStrings[2],subStrings[3],subStrings[4]);
		      cout << "track.show(Album ID, Song ID, Track #)" << endl;
		      cout << "    Album ID: " << subStrings[2] << endl;
		      cout << "    Song ID: " <<  subStrings[3] << endl;
		      cout << "    Track #: " <<  subStrings[4] << endl;
		      cout << "    SUCCESS: track has been shown \n" <<  endl;
		    } else if ((subStrings[1] == "user") && (subStrings.size() == 4)) {
		      //user.show(subStrings[2],subStrings[3]);
		      cout << "user.show(User ID, User Name)" << endl;
		      cout << "    User ID: " << subStrings[2] << endl;
		      cout << "    User Name: " <<  subStrings[3] << endl;
		      cout << "    SUCCESS: user has been shown \n" <<  endl;
		    } else if ((subStrings[1] == "playlist") && (subStrings.size() == 4)) {
		      //playlist.show(subStrings[2],subStrings[3]);
		      cout << "playlist.show(User ID, Playlist Name)" << endl;
		      cout << "    User ID: " << subStrings[2] << endl;
		      cout << "    Playlist Name: " <<  subStrings[3] << endl;
		      cout << "    SUCCESS: playlist has been shown \n" <<  endl;
		    } else if ((subStrings[1] == "playlisttrack") && (subStrings.size() == 5)) {
		      //playlisttrack.show(subStrings[2],subStrings[3]);
		      cout << "playlisttrack.show(User ID, Playlist Name, Song ID)" << endl;
		      cout << "    User ID: " << subStrings[2] << endl;
		      cout << "    Playlist Name: " <<  subStrings[3] << endl;
		      cout << "    Song ID: " <<  subStrings[4] << endl;
		      cout << "    SUCCESS: playlist track has been shown \n" <<  endl;
		    };
		} else if (subStrings[0] == ".help") {
		  ui.menuPrint();
		} else { cout << "ERROR! command is not recognized. " << endl;
		         cout << "Please ensure youve seperated input fields using *" << endl;
		}

    subStrings.clear();
  }
  fileOut.close();
  fileIn.close(); //fstream destructor will also close the file

  return(0);
} // END of Command::scriptInput()
