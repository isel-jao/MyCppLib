#include "lib.hpp"

//constructors - copy constructurs - deconstructors //
vec::vec() : x(0), y(0), z(0) {}
vec::vec(double const &x, double const &y, double const &z) : x(x), y(y), z(z) {}

vec::vec(vec const &obj)
{
	if (this == &obj)
		return;
	this->x = obj.x;
	this->y = obj.y;
	this->z = obj.z;
}

vec::~vec() {}
//////////////////////////////////////////////////////////////////

// getter - setter //
double vec::get_x() const { return this->x; }
double vec::get_y() const { return this->y; }
double vec::get_z() const { return this->z; }

void vec::set_x(double const &x) { this->x = x; }
void vec::set_y(double const &y) { this->y = y; }
void vec::set_z(double const &z) { this->z = z; }
//////////////////////////////////////////////////////////////////

// overload operators //
vec &vec::operator=(vec const &obj)
{
	if (this == &obj)
		return (*this);
	x = obj.x;
	y = obj.y;
	z = obj.z;
	return (*this);
}

vec vec::operator+(vec const &v) const
{
	vec ans;
	ans.set_x(this->x + v.get_x());
	ans.set_y(this->y + v.get_y());
	ans.set_z(this->z + v.get_z());
	return ans;
}
vec vec::operator-(vec const &v) const
{
	vec ans;
	ans.set_x(this->x - v.get_x());
	ans.set_y(this->y - v.get_y());
	ans.set_z(this->z - v.get_z());
	return ans;
}

vec vec::operator*(vec const &obj) const
{
	vec res;
	res.x = y * obj.z - obj.y * z;
	res.y = -(x * obj.z - obj.x * z);
	res.z = x * obj.y - obj.x - y;
	return res;
}

//////////////////////////////////////////////////////////////////

// member funcions //
double vec::dist() const
{
	return (sqrt(x * x + y * y + z * z));
}
//////////////////////////////////////////////////////////////////

std::ostream &operator<<(std::ostream &o, vec const &rhs)
{
	o << "x: " << rhs.get_x() << " y: " << rhs.get_y() << " z: " << rhs.get_z();
	return o;
}