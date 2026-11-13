#pragma once
#include<string>
#include<vector>
#include "employee.hpp"

namespace  Records {
    const int FirstEmployeeNumber{ 1'000 };

    class Database {
    public:
        Employee& addEmployee(const std::string& firstName,
            const std::string& lastName);
        Employee& getEmployee(int employeeNumber);
        Employee& getEmployee(const std::string& firstName,
            const std::string& lastName);

        void displayAll() const;
        void displayCurrent() const;
        void displayFormer() const;

    private:
        std::vector<Employee> m_employees;
<<<<<<< HEAD
        int m_nextEmployeeNumber{ FirstEmployeeNumber };
=======

>>>>>>> 6795d7507931488ec0e9c1fa3d9418c496caaa8c
    };
}