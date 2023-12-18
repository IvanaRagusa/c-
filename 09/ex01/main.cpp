#include "RPN.hpp"

bool check_args(char *argv)
{
	if (!(argv[0] >= '0' && argv[0] <= '9' && argv[2] >= '0' && argv[2] <= '9')
	     || ((argv[4] == '+' || argv[4] == '-' || argv[4] == '*' || argv[4] == '/') &&
			(argv[6] == '+' || argv[6] == '-' || argv[6] == '*' || argv[6] == '/')))
		return (false);
	for (unsigned long i = 0; i < strlen(argv) - 2; i++)
	{
		int j = i + 2;
		int q = i - 2;
		int k = i - 4;
		if ((argv[i] == '+' || argv[i] == '-' || argv[i] == '*' || argv[i] == '/') &&
			(argv[j] == '+' || argv[j] == '-' || argv[j] == '*' || argv[j] == '/'))
		{
			if (i > 3 && !(argv[q] >= '0' && argv[q] <= '9' && argv[k] >= '0' && argv[k] <= '9'))
				return (false);
		}		 
	}
	return(true);
}


int main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "please insert a string in double quote in RPN format like: 7 7 * 8 +" << std::endl;
	else if (!check_args(argv[1]))
	 	std::cout << "invalid input: format must be like: 7 7 * 8 +" << std::endl;
	else
	{
		int result = evaluate_rpn(argv[1]);
		std::cout << result << std::endl;
	}
	return 0;
}

/*
INPUT E OUTPUT
$> ./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
42
$> ./RPN "7 7 * 7 -"
42
$> ./RPN "1 2 * 2 / 2 * 2 4 - +"
0
$> ./RPN "(1 + 1)"
Error
$>
*/
