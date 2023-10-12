#pragma once

#include "Form.hpp"
#include <fstream>
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public Form
{
	private:
		const std::string	_target;
		RobotomyRequestForm();
	public:
		RobotomyRequestForm(const std::string& target);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& ref);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& ref);

		void	execute(const Bureaucrat& executor) const;
};