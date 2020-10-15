//
// Created by eric on 2020-10-13.
//
#ifndef LAB5_DIVISION_OPERATION_HPP
#define LAB5_DIVISION_OPERATION_HPP

#include "abstract_operation.hpp"

class Division_Operation : public Abstract_Operation {
public:
    static const char DIVISION_CODE = '/';

    Division_Operation() : Abstract_Operation(DIVISION_CODE) {

    };

    int perform(int a, int b) {
        return a / b;
    }

    virtual ~Division_Operation();
};
inline Division_Operation::~Division_Operation() {};

#endif //LAB5_DIVISION_OPERATION_HPP
