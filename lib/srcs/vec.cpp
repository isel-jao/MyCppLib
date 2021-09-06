# include "lib.hpp"

//constructors - copy constructurs - deconstructors //
vec::vec() : x(0), y(0), z(0) {}
vec::vec(int x, int y, int z) : x(x), y(y), z(z) {}

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
float vec::get_x() { return this->x; }
float vec::get_y() { return this->y; }
float vec::get_z() { return this->z; }

void vec::set_x(float x) { this->x = x; }
void vec::set_y(float y) { this->y = y; }
void vec::set_z(float z) { this->z = z; }
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

vec operator+(vec &v1, vec &v2)
{
	vec ans;
	ans.set_x(v1.get_x() + v2.get_x());
	ans.set_y(v1.get_y() + v2.get_y());
	ans.set_z(v1.get_z() + v2.get_z());
	return ans;
}

vec vec::operator*(vec const &obj)
{
	vec res;
	res.x = y * obj.z - obj.y * z;
	res.y = -(x * obj.z - obj.x * z);
	res.z = x * obj.y - obj.x - y;
	return res;
}


//////////////////////////////////////////////////////////////////

// member funcions //
double vec::dist()
{
	return (sqrt(x * x + y * y + z * z));
}
//////////////////////////////////////////////////////////////////
