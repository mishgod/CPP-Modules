# CPP Module 05

This module is designed to understand Try/Catch and Exceptions in CPP.

## ex 00

First, we start by the smallest cog in the vast bureaucratic machine: the `Bureaucrat`.

It must have a constant name, and a grade, that ranges from 1 (highest possible) to
150 (lowest possible). Any attempt to create a Bureaucrat with an invalid grade must
throw an exception, which will be either a `Bureaucrat::GradeTooHighException` or a
`Bureaucrat::GradeTooLowException.`

You will provide getters for both these attributes (`getName` and `getGrade`), and two
functions to increment or decrement the grade. Both these functions will throw the same
exceptions as before if the grade gets too high or too low. Remember, grade 1 is highest,
150 is lowest, so incrementing a grade 3 gives you a grade 2...

You will provide an overload of the << operator to `ostream` that outputs something
like `<name>, bureaucrat grade <grade>`.

## ex01

Make a `Form` class. It has a name, a boolean indicating whether it is signed (at
the beginning, it’s not), a grade required to sign it, and a grade required to execute it.
The name and grades are constant, and all these attributes are private (not protected).
The grades are subject to the same constraints as in the `Bureaucrat`, and exceptions
will be thrown if any of them are out of bounds, `Form::GradeTooHighException` and
`Form::GradeTooLowException`.

Same as before, make getters for all attributes, and an overload of the << operator
to `ostream` that completely describes the state of the form.

You will also add a `beSigned` function that takes a `Bureaucrat`, and makes the form
signed if the bureaucrat’s grade is high enough. Always remember, grade 1 is better than
grade 2. If the grade is too low, throw a `Form::GradeTooLowException`.

Also add a signForm function to the Bureaucrat. If the signing is successful, it will
print something like "<bureaucrat> signs <form>", otherwise it will print something
like `<bureaucrat> cannot sign <form> because <reason>`.

## ex02

Create a few concrete forms:
* `ShrubberyCreationForm` (Required grades: sign 145, exec 137). Action: Create
a file called <target>_shrubbery, and write ASCII trees inside it, in the current
directory.
* `RobotomyRequestForm` (Required grades: sign 72, exec 45). Action: Makes some
drilling noises, and tell us that <target> has been robotomized successfully 50% of
the time. Otherwise, tell us it’s a failure.
* `PresidentialPardonForm` (Required grades: sign 25, exec 5). Action: Tells us
<target> has been pardoned by Zafod Beeblebrox.

All of these will have to take only one parameter in their constructor, which will
represent the target of the form. For example, "home" if you want to plant shrubbery at
home. Remember the form’s attributes need to remain private, and in the base class.

Now you need to add a method `execute(Bureaucrat const & executor) const` to
the base form, and implement a method executing the form’s action in all the concrete
forms. You have to check that the form is signed, and that the bureaucrat attempting to
execute the form has a high enough grade, else you will throw an appropriate exception.
Whether you want to make these checks in every concrete class or make the check-in the
base class then calling another method to execute the action is up to you, but one way
is prettier than the other one. In any event, the base form must be an abstract class.

Finish this by adding an `executeForm(Form const & form)` function to the bureaucrat. It must attempt to execute the form, and if it’s a success, print something like
`<bureaucrat> executes <form>`. If not, print an explicit error message.

## ex03

You’re going to create the `Intern` class. The intern has no name, no grade, no defining characteristics whatsoever, we only care that it does its job.

The intern has one important thing, the `makeForm` function. It takes two strings, the
first representing the name of a form, and the second one being the target for the form. It
will return, as a pointer to `Form`, a pointer to whichever concrete form class is represented
by the first parameter, initialized with the second parameter. It will print something like
`Intern creates <form>` to the standard output. If it’s using a worse method, like
if/elseif/elseif/else branchings, or some other ugly stuff like this, it will not be accepted
during the evaluation. If the requested form is not known, print an explicit error message.