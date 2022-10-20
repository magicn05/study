#include "employee.h"

class contWorker: public Employee {
     int basic_salary;
     int bonus;
     int incentive_rate;
public:
    contWorker(string name, int basic_salary, int bonus, int incentive_rate);
    int getPay() const;
	  void showSalary() const;
};