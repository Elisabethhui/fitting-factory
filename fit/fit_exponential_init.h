////////////////////////////////////////
// Hua Wang
// November 9, 2014
// ENGN2912B Assignment 18
//
//  This file declare fit_exponential_init_h_
////////////////////////////////////////

#ifndef fit_exponential_init_h_
#define fit_exponential_init_h_


#include <vcl_vector.h>
#include <vnl/vnl_vector.h>
#include <vnl/vnl_least_squares_function.h>

#include <fit/fit_least_squares_init_function.h>
using namespace std;
class fit_exponential_init : public fit_least_squares_init_function
	//public vnl_least_squares_function, 
{
public:
	//: Constructor
	fit_exponential_init(vnl_vector<double> const& xi, vnl_vector<double> const& y) : 
	  fit_least_squares_init_function(xi.size()), xi_(xi), y_(y){} 
	  //: Destructor
	  ~fit_exponential_init() {}
	  virtual void init(vnl_vector<double>&  params) {

		  for (unsigned i=0;i<params.size();i++)
		  {
			  params[i]=1;
		  }
		 // params[2]=0;
	  }
protected:
	vnl_vector<double> xi_;
	vnl_vector<double> y_;
};

#endif // fit_exponential_init_h_