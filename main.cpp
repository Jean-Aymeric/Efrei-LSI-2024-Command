#include <iostream>
#include "Command.h"
#include "CommandLine.h"

int main() {
	Command command1("000001", "22/11/2024");
	command1.addLine(CommandLine("Truc 1", 2, 10.5));
	command1.addLine(CommandLine("Truc 2", 3, 5.5));
	command1.addLine(CommandLine("Truc 1", 1, 10.5));

	Command command2("000002", "23/11/2024");
	command2.addLine(CommandLine("Truc 3", 1, 15.5));
	command2.addLine(CommandLine("Truc 2", 2, 5.5));
	command2.addLine(CommandLine("Truc 1", 1, 10.5));

	std::cout << command1 << std::endl;
	std::cout << command2 << std::endl;

	std::cout << command1 + command2 << std::endl;
	return 0;
}
