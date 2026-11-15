#include<database.hpp>
#include<string>
#include<vector>

using namespace std;

namespace Records {
	Employee& Database::addEmployee(const string& firstName,
		const string& lastName) {
		Employee theEmployee{ firstName, lastName };
		theEmployee.setEmployeeNumber(m_nextEmployeeNumber++);
		theEmployee.hire();
		m_employees.push_back(theEmployee);
		return m_employees.back();
	}
}