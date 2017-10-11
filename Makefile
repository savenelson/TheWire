OBJ = main.o command.o UI.o util.o

thewire: $(OBJ)
	g++ -o thewire $(OBJ)

main.o: main.cpp
	g++ -c main.cpp

command.o: command.cpp command.h
	g++ -c -std=c++11 command.cpp

UI.o : UI.cpp UI.h
	g++ -c -std=c++11 UI.cpp

util.o : util.cpp util.h
	g++ -c -std=c++11 util.cpp

clean:
	rm -f $(OBJ) thewire
