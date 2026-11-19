
cmake_minimum_required(VERSION 4.2)

project(EmployeeRecordsSystem LANGUAGES CXX)

add_executable(EmployeeRecordsSystem
 "src/database.cpp"
 "src/main.cpp"
 "src/employee.cpp")

target_compile_features(EmployeeRecordsSystem PRIVATE cxx_std_23)

target_include_directories(EmployeeRecordsSystem
    PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/include"
)
