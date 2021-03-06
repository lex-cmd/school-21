#include "whatever.hpp"

template <typename T>
void	swap(T &first_elem, T &second_elem)
{
	T tmp = first_elem;
	first_elem = second_elem;
	second_elem = tmp;
}

template <typename T>
T		min(T &first_elem, T &second_elem)
{
	return (first_elem < second_elem) ? first_elem : second_elem;
}

template <typename T>
T		max(T &first_elem, T &second_elem)
{
	return (first_elem > second_elem) ? first_elem : second_elem;
}

int main( void )
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
