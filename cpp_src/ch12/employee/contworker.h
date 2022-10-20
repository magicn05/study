#include "employee.h"
#include <string>

class contWorker : public Employee {
  int basic_salary;
  int bonus;
  int incentive_rate;

public:
  contWorker(string name, string type, int basic_salary, int bonus, int incentive_rate);
  int getPay();
  void showSalary();
};