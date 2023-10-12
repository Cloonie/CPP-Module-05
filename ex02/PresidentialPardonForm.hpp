#pragma once

#include "Form.hpp"
#include <fstream>

class PresidentialPardonForm : public Form
{
	private:
		const std::string	_target;
		PresidentialPardonForm();
	public:
		PresidentialPardonForm(const std::string& target);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& ref);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& ref);

		void	execute(Bureaucrat const & executor) const;
};