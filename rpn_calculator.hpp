//
// Created by eric on 2020-10-13.
//
#ifndef LAB5_RPN_CALCULATOR_HPP
#define LAB5_RPN_CALCULATOR_HPP

#include <stack>
#include "addition_operation.hpp"
#include "subtraction_operation.hpp"
#include "multiplication_operation.hpp"
#include "division_operation.hpp"

class RPNCalculator {
private:
    int result;
    std::stack <int> st;
    Abstract_Operation* operation_type(char c);
    void perform(Abstract_Operation* p);
public:

    int process_formula(std::string formula);
};


#endif //LAB5_RPN_CALCULATOR_HPP
