#include "employee.h"
#include <string>
class permWorker : public Employee {
  int monthly_salary;
  
public:
  permWorker(string name, string type, int monthly_salary);
  int getPay();
  void showSalary();
};