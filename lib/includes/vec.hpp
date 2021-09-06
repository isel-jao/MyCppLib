# ifndef VEC_H
#define VEC_H

class vec;

class vec
{
private:
	float x;
	float y;
	float z;

public:
	//constructors - copy constructurs - deconstructors //
	vec();
	vec(int x, int y, int z);
	vec(vec const &obj);
	~vec();
	//////////////////////////////////////////////////////////////////

	// getter - setter //
	float get_x();
	float get_y();
	float get_z();

	void set_x(float x);
	void set_y(float y);
	void set_z(float z);
	//////////////////////////////////////////////////////////////////

	// overload operators //
	vec operator*(vec const &obj);
	vec &operator=(vec const &obj);
	//////////////////////////////////////////////////////////////////

	// member funcions //
	double dist();
	//////////////////////////////////////////////////////////////////
};

#endif