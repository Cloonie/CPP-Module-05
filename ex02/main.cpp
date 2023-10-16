#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	// ~~~~ default constructor ~~~
	std::cout << "\n~~~ DEFAULT CONSTRUCTOR ~~~" << std::endl;
	Bureaucrat b1("Bill", 1);


	std::cout << "\n~~~ ShrubberyCreationForm ~~~" << std::endl;
	ShrubberyCreationForm scf("SCF");

	b1.signForm(scf);
	std::cout << scf << std::endl;
	b1.executeForm(scf);


	std::cout << "\n~~~ RobotomyRequestForm ~~~" << std::endl;
	RobotomyRequestForm rrf("RRF");

	b1.signForm(rrf);
	std::cout << rrf << std::endl;
	b1.executeForm(rrf);


	std::cout << "\n~~~ PresidentialPardonForm ~~~" << std::endl;
	PresidentialPardonForm ppf("PPF");

	b1.signForm(ppf);
	std::cout << ppf << std::endl;
	b1.executeForm(ppf);

	// ~~~~ destructor ~~~
	std::cout << "\n~~~ DESTRUCTORS ~~~\n";
}