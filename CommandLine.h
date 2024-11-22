//
// Created by JAD on 22/11/2024.
//

#ifndef UNTITLED9__COMMANDLINE_H_
#define UNTITLED9__COMMANDLINE_H_

#include <string>
#include <iostream>

class CommandLine {
  private:
	std::string article;
	int quantity;
	double unitPrice;
  public:
	CommandLine(std::string article, int quantity, double unitPrice);
	~CommandLine() = default;
	[[nodiscard]] double getTotalPrice() const;
	friend std::ostream &operator<<(std::ostream &os, const CommandLine &commandLine);
	[[nodiscard]] std::string getArticle() const { return this->article; }
	[[nodiscard]] int getQuantity() const { return this->quantity; }
	void setQuantity(int quantity) { this->quantity = quantity; }
};

#endif //UNTITLED9__COMMANDLINE_H_
