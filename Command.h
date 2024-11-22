//
// Created by JAD on 22/11/2024.
//

#ifndef UNTITLED9__COMMAND_H_
#define UNTITLED9__COMMAND_H_

#include <string>
#include <vector>
#include <iostream>
#include "CommandLine.h"

class Command {
  private:
	std::string numCommand;
	std::string date;
	std::vector<CommandLine> commandLines;
  public:
	Command(std::string numCommand, std::string date);
	~Command() = default;
	void addLine(CommandLine commandLine);
	friend std::ostream &operator<<(std::ostream &os, const Command &command);
	friend Command operator+(const Command &left, const Command &right);
	double getTotalPrice() const;
};

#endif //UNTITLED9__COMMAND_H_
