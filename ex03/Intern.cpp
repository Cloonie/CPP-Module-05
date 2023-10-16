#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern constructed" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructed" << std::endl;
}

Intern::Intern(const Intern& ref)
{
	*this = ref;
}

Intern& Intern::operator=(const Intern& ref)
{
	if (this != &ref) {}
	return (*this);
}

AForm*	Intern::makeForm(const std::string& form, const std::string& target) const
{
	const std::string	names[3] =
		{"shrubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 3; i++)
	{
		if (names[i] == form)
		{
			switch (i)
			{
				case 0:
					return (new ShrubberyCreationForm(target));
				case 1:
					return (new RobotomyRequestForm(target));
				case 2:
					return (new PresidentialPardonForm(target));
			}
		}
	}
	throw FormNotFoundException();
}

const char*	Intern::FormNotFoundException::what() const throw()
{
	return "<Intern> Form not found";
}