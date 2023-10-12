#ifndef FORM_HPP
#define FORM_HPP

#include <exception>
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
		void	NotSignedException(void);

		void			beSigned(const Bureaucrat& b);
		virtual void	execute( const Bureaucrat& executor ) const = 0;
};

class NotSignedException : public std::exception {
public:
    const char* what() const throw() {
        return "The form is not signed.";
    }
};

class GradeTooHighException : public std::exception {
public:
    const char* what() const throw() {
        return "The grade is too high to execute the form.";
    }
};

class GradeTooLowException : public std::exception {
public:
    const char* what() const throw() {
        return "The grade is too low to execute the form.";
    }
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif