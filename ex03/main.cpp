#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	try
	{
		std::cout << "\n~~~ DEFAULT CONSTRUCTOR ~~~" << std::endl;
		Bureaucrat b1("Bill", 1);
		Intern	someRandomIntern;
		AForm	*form;

		std::cout << "\n~~~ ShrubberyCreationForm ~~~" << std::endl;
		form = someRandomIntern.makeForm("shrubbery creation", "Tree");
		b1.signForm(*form);
		std::cout << *form << std::endl;
		b1.executeForm(*form);
		delete form;

		std::cout << "\n~~~ RobotomyRequestForm ~~~" << std::endl;
		form = someRandomIntern.makeForm("robotomy request", "Robot");
		b1.signForm(*form);
		std::cout << *form << std::endl;
		b1.executeForm(*form);
		delete form;

		std::cout << "\n~~~ PresidentialPardonForm ~~~" << std::endl;
		form = someRandomIntern.makeForm("presidential pardon", "President");
		b1.signForm(*form);
		std::cout << *form << std::endl;
		b1.executeForm(*form);
		delete form;

		std::cout << "\n~~~ Failed Form ~~~" << std::endl;
		form = someRandomIntern.makeForm("something wrong", "failure");
		b1.signForm(*form);
		std::cout << *form << std::endl;
		b1.executeForm(*form);
		delete form;

		std::cout << "\n~~~ DESTRUCTORS ~~~\n";
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}