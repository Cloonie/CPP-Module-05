#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: Form("RobotomyRequestForm", false, 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm has been constructed with target: " << _target << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm has been destructed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& ref)
	: Form(ref), _target(ref._target)
{
	std::cout << "RobotomyRequestForm has been copied" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm:: operator=(const RobotomyRequestForm& ref)
{
	(void)ref;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->get_isSigned() == false)
		std::cout << "Form is not signed" << std::endl;
	else if (executor.getGrade() > this->get_gradeExec())
		std::cout << "Grade requirements not met to execute form" << std::endl;
	else
	{
		// Seed the random number generator with the current time
		std::srand(std::time(0));

		// Generate a random number between 0 and RAND_MAX (typically a large integer)
		int randomValue = std::rand();

		// Calculate the result as 0 (Heads) or 1 (Tails)
		int result = randomValue % 2;

		if (result == 0)
			std::cout << _target << " has been robotomized successfully" << std::endl;
		else
			std::cout << _target << " robotomy has failed" << std::endl;
	}
}