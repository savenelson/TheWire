#ifndef APP
#define APP

#include "command.h"
#include "UI.h"

using namespace std;

class App {

public:
	App();
	void run();
private:
	Command com;
	UI ui;

};
#endif
