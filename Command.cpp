//
// Created by JAD on 22/11/2024.
//

#include "Command.h"

Command::Command(std::string numCommand, std::string date) {
	this->numCommand = numCommand;
	this->date = date;
}

void Command::addLine(CommandLine commandLine) {
	for (CommandLine line : this->commandLines) {
		if (line.getArticle() == commandLine.getArticle()) {
			line.setQuantity(line.getQuantity() + commandLine.getQuantity());
			return;
		}
	}
	this->commandLines.push_back(commandLine);
}

std::ostream &operator<<(std::ostream &os, const Command &command) {
	os << "Commande n°" << command.numCommand << std::endl;
	os << "Date : " << command.date << std::endl;
	os << "-----------------------------------------------------" << std::endl;
	os << "| Article\t| Quantité\t| Prix unitaire\t| Total\t|" << std::endl;
	os << "-----------------------------------------------------" << std::endl;
	for (const CommandLine &line : command.commandLines) {
		os << line;
	}
	os << "-----------------------------------------------------" << std::endl;
	os << "Total de la commande : " << command.getTotalPrice() << std::endl;
	return os;
}

Command operator+(const Command &left, const Command &right) {
	Command result = Command(left.numCommand + right.numCommand, left.date);
	for (const CommandLine &line : left.commandLines) {
		result.addLine(line);
	}
	for (const CommandLine &line : right.commandLines) {
		result.addLine(line);
	}
	return result;
}

double Command::getTotalPrice() const {
	double total = 0;
	for (CommandLine line : this->commandLines) {
		total += line.getTotalPrice();
	}
	return total;
}
