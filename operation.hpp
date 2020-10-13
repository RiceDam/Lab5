//
// Created by eric on 2020-10-13.
//
#ifndef LAB5_OPERATION_HPP
#define LAB5_OPERATION_HPP

#include <iostream>

class Operation {
public:
    virtual char get_code();
    virtual int perform(int a, int b);
    virtual ~Operation();
};

Operation::~Operation() {
    std::cout << "Operation has been destroyed" << std::endl;
}

#endif //LAB5_OPERATION_HPP
