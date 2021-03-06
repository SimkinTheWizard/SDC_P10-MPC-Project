#ifndef MPC_H
#define MPC_H

#include <vector>
#include "Eigen-3.3/Eigen/Core"

using namespace std;

class MPC {
 public:
  MPC();

  virtual ~MPC();

  // Solve the model given an initial state and polynomial coefficients.
  // Return the first actuatotions.
  vector<double> Solve(Eigen::VectorXd state, Eigen::VectorXd coeffs);
	
	vector<double> GetXVals(){return mpc_x_vals_;}
	vector<double> GeyYVals(){return mpc_y_vals_;}
	
private:
	vector<double> mpc_x_vals_;
	vector<double> mpc_y_vals_;
};

#endif /* MPC_H */
