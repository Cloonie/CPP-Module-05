#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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
		void				setGrade(int grade);

		void	GradeTooLowException();
		void	GradeTooHighException();

		void	incrementGrade(void);
		void	decrementGrade(void);
};

#endif