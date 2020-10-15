//
// Created by eric on 2020-10-13.
//
#ifndef LAB5_MULTIPLICATION_OPERATION_HPP
#define LAB5_MULTIPLICATION_OPERATION_HPP

#include "abstract_operation.hpp"

class Multiplication_Operation : public Abstract_Operation{
public:
    static const char MULTIPLICATION_CODE = '*';
    Multiplication_Operation() : Abstract_Operation(MULTIPLICATION_CODE) {

    };
    int perform(int a, int b) {
        return a * b;
    }
    virtual ~Multiplication_Operation();
};

inline Multiplication_Operation::~Multiplication_Operation() {};


#endif //LAB5_MULTIPLICATION_OPERATION_HPP
