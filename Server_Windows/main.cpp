#include "stringprocess.hpp"
#include <filesystem>
#include <stdlib.h>

int main()
{
	CommandString inputmanage;
	CommandString filedirect;
	inputmanage.isolate("init");
	
	inputmanage.getinput();
	if (inputmanage[0] == "init" && inputmanage[1] == "server")
	{
		system("mkdir C:\\SSH_Server");

		system("mkdir C:\\SSH_Server\\queue");
		system("mkdir C:\\SSH_Server\\user");

		system("mkdir C:\\SSH_Server\\system");
		system("mkdir C:\\SSH_Server\\system\\PC_name");
		system("mkdir C:\\SSH_Server\\system\\specs");
		system("mkdir C:\\SSH_Server\\system\\diagnostics");
		system("mkdir C:\\SSH_Server\\system\\authorized_users");
	}

	else if (inputmanage[0] == "newuser")
	{
		
	}

	return 0;
}