#pragma once

#include "AForm.hpp"
#include <fstream>
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm
{
	private:
		const std::string	_target;
		RobotomyRequestForm();
	public:
		RobotomyRequestForm(const std::string& target);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& ref);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& ref);

		void	execute(Bureaucrat const & executor) const;
};