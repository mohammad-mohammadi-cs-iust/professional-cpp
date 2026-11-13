
cmake_minimum_required(VERSION 3.23)

project(EmployeeRecordsSystem LANGUAGES CXX)

add_executable(EmployeeTest
    src/employee.cpp
    src/employeeTest.cpp
)

target_compile_features(EmployeeTest PRIVATE cxx_std_20)

target_include_directories(EmployeeTest
    PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/include"
)
