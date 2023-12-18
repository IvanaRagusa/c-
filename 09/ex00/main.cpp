#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	try
	{
		if (argc != 2)
		{
			std::cout << "insert file.txt as input" << std::endl;
			return 1;
		}
		std::ifstream file(argv[1]);
		if (!file.is_open())
			throw std::runtime_error("unable to open file.txt");
		std::string tmp;
		std::map<int, float> csv_map;
		csv_map = ft_cvs_map();
		if (std::getline(file, tmp))
		{
			while (std::getline(file, tmp))
				find_btc(csv_map, tmp);
			file.close();
		}
		else 
			throw std::runtime_error("input file is empty");
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	return 0;
}