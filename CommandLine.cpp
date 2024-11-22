//
// Created by JAD on 22/11/2024.
//

#include "CommandLine.h"

#include <utility>

CommandLine::CommandLine(std::string article, int quantity, double unitPrice) {
	this->article = std::move(article);
	this->quantity = quantity;
	this->unitPrice = unitPrice;
}

double CommandLine::getTotalPrice() const {
	return this->quantity * this->unitPrice;
}

std::ostream &operator<<(std::ostream &os, const CommandLine &commandLine) {
	return os << "| " << commandLine.article << "\t| " << commandLine.quantity << commandLine.unitPrice<< "\t| " << commandLine.getTotalPrice() << "\t| " << std::endl;
}
