//
// Created by eric on 2020-10-13.
//
#ifndef LAB5_SUBTRACTION_OPERATION_HPP
#define LAB5_SUBTRACTION_OPERATION_HPP

#include "abstract_operation.hpp"

class Subtraction_Operation : public Abstract_Operation{
public:
    static const char SUBTRACTION_CODE = '-';
    Subtraction_Operation() : Abstract_Operation(SUBTRACTION_CODE) {

    };
    int perform(int a, int b) {
        return a - b;
    }
    virtual ~Subtraction_Operation();
};

Subtraction_Operation::~Subtraction_Operation() {
    std::cout << "Subtraction Operation destroyed" << std::endl;
}


#endif //LAB5_SUBTRACTION_OPERATION_HPP
