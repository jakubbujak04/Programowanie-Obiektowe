#ifndef CALC_H
#define CALC_H

class Calculator{
private:

    double memory;
    bool memory_used;

    double sum(double arg1, double arg2);
    double sub(double arg1, double arg2);
    double tim(double arg1, double arg2);
    double div(double arg1, double arg2);
    double mod(double arg1, double arg2);

public:

    Calculator();
    double arg1;
    double arg2;
    char op;
    double result;
    double memory_show;

    void get_result();

    void erase();
    void get_memory();
    void set_memory();
};

#endif // CALC_H
