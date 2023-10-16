#pragma once

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern& ref);
		Intern& operator=(const Intern& ref);
		AForm*	makeForm(const std::string& form, const std::string& target) const;

		class FormNotFoundException: public std::exception {
			virtual const char*	what() const throw();
		};
};
