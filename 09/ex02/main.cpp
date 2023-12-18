#include "PmergeMe.hpp"

int main(int argc, char **argv)
{

	if (argc < 3)
	{
		std::cout << "Error:\ninsert 2 or more positive int to sort" << std::endl;
		return (1);
	}
	std::string input = ft_check_error(argc, argv);
	std::cout << "\n\033[1m\033[31mBefore: \033[0m" << input << std::endl;
	std::vector<int> v;
	clock_t vec_stime = clock();
	sort_container(v, input);
	clock_t vec_etime = clock();
	std::deque<int> l;
	clock_t deq_stime = clock();
	sort_container(l, input);
	clock_t deq_etime = clock();
	std::cout << "\n\033[1m\033[32mAfter: \033[0m";
	for (std::vector<int>::iterator it = v.begin(); it < v.end(); it++)
		std::cout << *it << " ";
	double v_time = static_cast<double>(vec_etime - vec_stime) / CLOCKS_PER_SEC * 10000000;
	double d_time = static_cast<double>(deq_etime - deq_stime) / CLOCKS_PER_SEC * 10000000;
	std::cout << "\n\n\033[1m\033[36mTime to process a range of " << (v.end() - v.begin()) << " elements with std::vector<int>: \033[0m" << v_time << " us" << std::endl;
	std::cout << "\n\033[1m\033[33mTime to process a range of " << v.end() - v.begin() << " elements with std::deque<int>: \033[0m" << d_time << " us" << std::endl;
}
