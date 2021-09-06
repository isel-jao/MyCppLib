# include "lib.hpp"

std::ostream &operator<<(std::ostream &o, vec &rhs)
{
	o << "x: " << rhs.get_x() << " y: " << rhs.get_y() << " z: " << rhs.get_z();
	return o;
}

int main()
{
	bool theory;

	theory = 7;
	std::cout << "bool = " << theory << std::endl;
}
