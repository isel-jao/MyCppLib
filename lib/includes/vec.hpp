#ifndef VEC_H
#define VEC_H

class vec;

class vec
{
private:
	double x;
	double y;
	double z;

public:
	//constructors - copy constructurs - deconstructors //
	vec();
	vec(double const &x, double const &y, double const &z);
	vec(vec const &obj);
	~vec();
	//////////////////////////////////////////////////////////////////

	// getter - setter //
	double get_x() const;
	double get_y() const;
	double get_z() const;

	void set_x(double const &x);
	void set_y(double const &y);
	void set_z(double const &z);
	//////////////////////////////////////////////////////////////////

	// overload operators //
	vec &operator=(vec const &obj);
	vec operator*(vec const &obj) const;
	vec operator+(vec const &obj) const;
	vec operator-(vec const &obj) const;
	//////////////////////////////////////////////////////////////////

	// member funcions //
	double dist() const;
	//////////////////////////////////////////////////////////////////
};

std::ostream &operator<<(std::ostream &o, vec const &rhs);

#endif