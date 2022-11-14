#include "iostream"

int main()
{
    try
    {
        // Statements that may throw exceptions you want to handle go here
		if (2 > 1)
			throw "It0 is else\n";
		else
	        throw 0.1; // here's a trivial example
    }

    
	catch (int x)
    {
        // Any exceptions of type int thrown within the above try block get sent here
        std::cerr << "We caught an int exception with value: " << x << '\n';
    }

    
	catch (double) // no variable name since we don't use the exception itself in the catch block below
    {
        // Any exceptions of type double thrown within the above try block get sent here
        std::cerr << "We caught an exception of type double" << '\n';
    }
    

	// catch (const std::string&) // catch classes by const reference
	catch (const char* str) // catch classes by const reference
    {
        // Any exceptions of type std::string thrown within the above try block get sent here
        std::cerr << "We caught an exception of type std::string\n";
    }


    std::cout << "Continuing on our merry way\n";

    return 0;
}