#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_isSigned;
		int					_gradeSign;
		int					_gradeExec;

	public:
		Form();
		Form(const std::string name, bool isSigned, int gradeSign, int gradeExec);
		~Form();
		Form(const Form& ref);
		Form& operator=(const Form& ref);

		const std::string	get_name(void) const;
		bool				get_isSigned(void) const;
		int					get_gradeSign(void) const;
		int					get_gradeExec(void) const;

		void	checkGrade(int grade);
		void	GradeTooLowException(void);
		void	GradeTooHighException(void);

		void	beSigned(Bureaucrat *b);
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif