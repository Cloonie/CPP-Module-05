#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: Form("PresidentialPardonForm", false, 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm has been constructed with target: " << _target << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm has been destructed" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ref)
	: Form(ref), _target(ref._target)
{
	std::cout << "PresidentialPardonForm has been copied" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm:: operator=(const PresidentialPardonForm& ref)
{
	(void)ref;
	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (this->get_isSigned() == false)
		std::cout << "Form is not signed" << std::endl;
	else if (executor.getGrade() > this->get_gradeExec())
		std::cout << "Grade requirements not met to execute form" << std::endl;
	else
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}