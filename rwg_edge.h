
#ifndef RWG_EDGE_H_
#define RWG_EDGE_H_

#include "type.h"

class RWGedge {

public:

	RWGedge(int index, const EdgeIndex & edge,
		int vertex1, int vertex2,
		int trian_index1, int trian_index2
		);

	Point vertex_plus() const;

	int vertex_plus_index() const;

	Point vertex_minus() const;

	int vertex_minus_index() const;

	double plus_area() const;
	double minus_area() const;
	double trian_area(int reg) const;

	Point plus_center() const;
	Point minus_center() const;
	//Point trian_center(int reg) const;

	EdgeIndex edge_share() const;

	int trian_plus_index() const;
	int trian_minus_index() const;

	Triangle trian_plus() const;
	Triangle trian_minus() const;
	Triangle triangle(int reg) const;

	double share_edge_length() const;

	//const Antenna & get_data() const;

	const Vector rho_c_plus() const;
	const Vector rho_c_minus() const;

	const Vector rho_plus(const Point & point) const;
	const Vector rho_minus(const Point & point) const;

	const int index;

	const EdgeIndex eg_share;

	const int ve_plus;

	const int ve_minus;

	const int t_plus_index;

	const int t_minus_index;

};


#endif
