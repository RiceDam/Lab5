cmake_minimum_required(VERSION 3.17)
project(Lab5)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab5 main.cpp operation.hpp abstract_operation.hpp addition_operation.hpp subtraction_operation.hpp multiplication_operation.hpp division_operation.hpp rpn_calculator.cpp rpn_calculator.hpp)