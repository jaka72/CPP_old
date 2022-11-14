/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jaka <jaka@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/28 08:23:56 by jaka          #+#    #+#                 */
/*   Updated: 2022/10/29 12:21:45 by jaka          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_H
#define INTERN_H

#include "colors.h"
// #include <iostream>
// #include <exception>
#include <string>
#include "Form.hpp"
// #include "ShrubberyCreationForm.hpp"	// to recognize the dummy form


class Form; // Is this needed?


class Intern
{
	private:
		Form *_form[4];

//		int					_grade;
//		const std::string	_name;

	public:

		// Constructor
		Intern();
		
		// Param. constr.
		//Intern(std::string name, int grade);

		// Copy constructor
		Intern(const Intern &src);

		// Destructor
		~Intern();

		// Overload operators
		Intern &operator= (const Intern &src);


		// Public member functions
		//void	incr_grade();
		//void	decr_grade();
		Form  *makeForm(std::string formName, std::string formTarget);


		// DUMMY WRONG FORM
		// class WrongForm : public ShrubberyCreationForm  //, public std::exception
		// {
		// 	public:
		// 		const char *what() const throw();
		// };



		// class GradeTooHighException : public std::exception
		// class WrongForm : public virtual Form
        // {
        //     public:
        //         const char* _msg;

        //         // GradeTooHighException() throw();
        //         // GradeTooHighException(const char* msg) throw();                
        //         // ~GradeTooHighException() throw();
        		
				
		// 		std::string getName() const; // THIS FUNC MUST BE PRESENT, BECAUSE IN BASE-FORM IS SET TO = 0
                
        //         //const char* what(const char* msg) const throw();
        //         // const char* what() const throw();
        // };
		//void test1();

		//void    signForm(Form &form);


		// Getter
		//int			getGrade() const;
		//std::string getName() const;		// maybe return const ???


		// Setter
		//void	setGrade(int grade);


		// Exceptions
		// CLASS INSIDE CLASS
		// class GradeTooHighException : public std::exception
		// {
        //     // public:
    	// 		const char* what() const throw();
		// };

        // // CLASS INSIDE CLASS
		// class GradeTooLowException : public std::exception
		// {
        //     // public:
    	// 		const char* what() const throw();
		// };
};

//std::ostream &operator<< (std::ostream& outstream, Intern& bur);

#endif
