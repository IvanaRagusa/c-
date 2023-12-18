#include "Serializer.hpp"
#include "Data.hpp"

int	main(void)
{
	Data*		ptr;
	uintptr_t	uptr;

	ptr = new Data;
	ptr->name = "Ciro";
	
	std::cout << "begin ptr to Data is: " << ptr << std::endl;
	
	uptr = Serializer::serialize(ptr);

	std::cout << "recasted Data to uintptr uinptr is: " << uptr << std::endl;
	
	std::cout << "recasted uinptr to Data is: " << Serializer::deserialize(uptr) << std::endl;
	
	delete ptr;
	return (0);
}