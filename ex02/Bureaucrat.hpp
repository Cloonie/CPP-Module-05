#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& ref);
		Bureaucrat& operator=(const Bureaucrat& ref);

		const std::string	getName(void) const;
		int					getGrade(void) const;

		void	setGrade(int grade);

		void	GradeTooLowException(void);
		void	GradeTooHighException(void);

		void	incrementGrade(void);
		void	decrementGrade(void);

		void	signForm(Form & form);
		void	executeForm(Form const & form);
};

// Define the << operator as a global function
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif