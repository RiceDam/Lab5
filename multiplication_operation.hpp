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
    ~Multiplication_Operation();
};

Multiplication_Operation::~Multiplication_Operation() {
    std::cout << "Multiplication Operation destroyed" << std::endl;
}


#endif //LAB5_MULTIPLICATION_OPERATION_HPP
