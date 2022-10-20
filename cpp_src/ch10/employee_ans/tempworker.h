#include "employee.h"

class TempWorker: public Employee {
private:
     int workDay;
     int perday;

public:
    TempWorker(string name, int perday, int day);
    int getPay() const;
	  void showSalary() const;
};