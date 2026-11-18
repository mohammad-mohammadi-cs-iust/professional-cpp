#include<database.hpp>
#include<print>

using namespace std;
using namespace HR;

int main() {

	Database myDB;

	Employee& emp1{ myDB.addEmployee("Mohammad", "Mohammadi") };
	emp1.fire();

	Employee& emp2{ myDB.addEmployee("Parsa", "Nasiri") };
	emp2.setSalary(100'000);

	Employee& emp3{ myDB.addEmployee("Ali", "Mohseni") };
	emp3.setSalary(10'000);
	emp3.promote();

	println("All employees: \n==============");
	myDB.displayAll();

	println("Current employees: \n=============");
	myDB.displayCurrent();

	println("Former meployees: \n==============");
	myDB.displayFormer();

	return 0;
}