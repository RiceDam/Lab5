//
// Created by eric on 2020-10-13.
//
#include <sstream>
#include "rpn_calculator.hpp"

Abstract_Operation *RPNCalculator::operation_type(char c) {
    Abstract_Operation *a;
    switch (c) {
        case Addition_Operation::ADDITION_CODE:
            a = new Addition_Operation();
            return a;
        case Subtraction_Operation::SUBTRACTION_CODE:
            a = new Subtraction_Operation();
            return a;
        case Multiplication_Operation::MULTIPLICATION_CODE:
            a = new Multiplication_Operation();
            return a;
        case Division_Operation::DIVISION_CODE:
            a = new Division_Operation();
            return a;
    }
}

void RPNCalculator::perform(Abstract_Operation *p) {
    int b = st.top();
    st.pop();
    int a = st.top();
    st.pop();
    char c = p->get_code();
    switch(c) {
        case Addition_Operation::ADDITION_CODE:
            st.push(a+b);
            break;
        case Subtraction_Operation::SUBTRACTION_CODE:
            st.push(a-b);
            break;
        case Multiplication_Operation::MULTIPLICATION_CODE:
            st.push(a*b);
            break;
        case Division_Operation::DIVISION_CODE:
            st.push(a/b);
            break;
    }
}

int RPNCalculator::process_formula(std::string formula) {
    std::istringstream iss(formula);
    while (!iss.eof()) {
        bool num = true;
        std::string operand;
        iss >> operand;
        for (int i = 0; i < operand.length(); i++) {
            if (!isdigit(operand[i])) {
                perform(operation_type(operand[0]));
                num = false;
            }
        }
        if (num) {
            st.push(std::stoi(operand));
        }
    }
    return st.top();
}
