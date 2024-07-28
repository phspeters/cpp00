#include <iostream>
#include <cctype>

#define PRINT(x) std::cout << x << std::endl

int main(int argc, char *argv[])
{
    if (argc == 1)
	{
		PRINT("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
		return (0);
	}

	std::string input;
	for (int i = 1; i < argc; i++)
		input += (argv[i]);
	
	for (std::string::size_type i = 0; i < input.length(); i++)
		input[i] = std::toupper(input[i]);

	PRINT(input);

    return 0;
}
