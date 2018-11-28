#include <iostream>

int calculate(char op, int numb);
int main(int argc, char* args[])
{
    // Create a simple calculator application which reads the parameters from the prompt
    // and prints the result to the prompt.
    // It should support the following operations,
    // create a method named "calculate()":
    // +, -, *, /, % and it should support two operands.
    // The format of the expressions must be: {operation} {operand} {operand}.
    // Examples: "+ 3 3" (the result will be 6) or "* 4 4" (the result will be 16)


    // It should work like this:
    // Start the program
    // It prints: "Please type in the expression:"
    // Waits for the user input
    // Print the result to the prompt
    // Exit

    char operation;
    int number;
    std::cout<<"Enter an operation and a number:";
    std::cin>>operation, number;

    std::cout<<calculate(operation,number)<<std::endl;

    return 0;
}
int calculate(char op, int numb){
    int calc = 0;
    if (op == "+"){
       calc = numb + numb;
    }else if(op == "-"){
        calc = numb - numb;
    }else if(op == "*"){
        calc = numb * numb;
    }else if(op == "/"){
        calc = numb / numb;
    }else
        std::cout<<"please try again";
    return calc;
}