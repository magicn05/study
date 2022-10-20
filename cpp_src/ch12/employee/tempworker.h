#include "employee.h"
#include <string>
class TempWorker: public Employee {
private:
     int workDay;
     int perday;

public:
    TempWorker(string name, string type, int perday, int day);
    int getPay();
	  void showSalary();
};