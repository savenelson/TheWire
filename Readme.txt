+++ReadMe.txt+++
 
* COMP 2404, Software Engineering, Carleton University, Dr. Louis Nel
* Assignment 1 - Command Line Music Application
* Names:             Student Numbers:
* Sammy Diamanstein  101060342
* David Nelson       100988784
* OS: Bash on Ubuntu on Windows, Lubuntu VM
* Date: October 10th, 2017

****Special Note to TA****

<We have chosen to implement a design where the inputs by the user where they punch in commands sequentially, rather than giving access to enter all commands as soon as the program is started. This was an intentional design decision, as we believe that doing so guides the user down a path in which they know exactly what they are doing, seeking the menu from .help if needed. We did this to avoid the input of erroneous commands, ensuring that to enter a command the user must have decided to type .cmd before the do so. Thank you very much>

<<<General Information>>>>:  	
Command Enterring ( also shown when you type .help in the program)	
.cmd = command enter mode     .... enter 
.script afterwards allows you to enter commands via a script file, and output results to a file.
                             ....enter .user after .cmd and you can enter individual commands following the format as specified in .help 
.help = display the menu of all of the options a user has
.exit = quits the program
.logstart = starts logging all of the keystroks. 
.logStop = stop logging the keystrokes

<<<<ReadMe sections>>>>
1.  Extraction command  used to uncompress the assignment files.
    There are no special instructions needed to uncompress the zip file beyond the need to click unzip the folder.

2.  The g++ compiler commands needed to be executed to compile the code.
    Use the following command to get an executable thewire	
    make
    Use the following command to get an executable a.out	
    g++ -g -Wall -std=c++11 main.cpp util.cpp UI.cpp command.cpp

3. Instructions on what script, or scripts to run to demonstrate the testing.	
    Script 1: addall.txt--->  Covers all adding actions: add( recordings,songs,tracks,users,playlists,playlist_tracks)	
              In order to run this script, follow enter these next 4 commands to the program once it has been started (ie...  run  ./a.out                in a command prompt) :
              .cmd
              .script 
              addall.txt
              addallOut.txt
              --> the outcome of following these steps is that a file called addallOut.txt will be created  in the directory you are currently in which will show the result of the add comands being executed and read

    Script2: testall.txt---> Covers all of the remaining functional requirements as specified in the assignment documentation.	
             In order to run this script, follow enter these next 4 commands to the program once it has been started (ie...  run  ./a.out                in a command prompt) :		             
             .cmd
             .script
             testall.txt
             testallOut.txt
             --> the outcome of following these steps is that a file called testallOut.txt will be created  in the directory you are currently in which will show the result of the addcomands being executed and read




 