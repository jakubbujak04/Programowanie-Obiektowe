#include "calc.h"

#include <iostream>

Calculator::Calculator(){
    arg1 = 0;
    arg2 = 0;
    result = 0;
    memory_used = false;
}

double Calculator::sum(double arg1, double arg2){
    if (memory_used == false) {
        result = arg1 + arg2;
        Calculator::set_memory();
    }

    else {
        result = memory + arg2;
        Calculator::set_memory();
    }

    return result;
}

double Calculator::sub(double arg1, double arg2){
    if (memory_used == false) {
        result = arg1 - arg2;
        Calculator::set_memory();
    }

    else {
        result = memory - arg2;
        Calculator::set_memory();
    }

    return result;
}

double Calculator::tim(double arg1, double arg2){
    if (memory_used == false) {
        result = arg1 * arg2;
        Calculator::set_memory();
    }

    else {
        result = memory * arg2;
        Calculator::set_memory();
    }

    return result;
}

double Calculator::div(double arg1, double arg2){
    if (memory_used == false){
        if (arg2 == 0) {
            return 0;
        }
        else {
            result = arg1 / arg2;
            Calculator::set_memory();
        }
    }

    else {
        result = memory / arg2;
        Calculator::set_memory();
    }

    return result;
}

double Calculator::mod(double arg1, double arg2){
    if (memory_used == false) {
        if(arg2 == 0){
            return 0;
        }
        else{
        result = arg1 - (int)(arg1 / arg2) * arg2;
        Calculator::set_memory();
        }
    }
    else {
        result = memory - (int)(memory / arg2) * arg2;
        Calculator::set_memory();
    }

    return result;
}

void Calculator::get_result(){

    Calculator::erase();

    if(op == '+'){
        Calculator::sum(arg1, arg2);
    }
    else if(op == '-'){
        Calculator::sub(arg1, arg2);
    }
    else if(op == '*'){
        Calculator::tim(arg1, arg2);
    }
    else if(op == '/'){
        Calculator::div(arg1, arg2);
    }
    else if(op == '%'){
        Calculator::mod(arg1, arg2);
    }
}

void Calculator::get_memory(){
    memory_show = memory;
}

void Calculator::set_memory(){
    memory = result;
    memory_used = true;
}

void Calculator::erase(){
    //Czysci okienko obliczeniowe i pamiec
    memory = 0;
    memory_used = false;
}
