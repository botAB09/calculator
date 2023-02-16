#include <iostream>
//calculator class 
class calculator
{
public:
    int add(int operand_1, int operand_2);
    int subtract(int operand_1, int operand_2);
    int multiply(int operand_1, int operand_2);
    float divide(int operand_1, int operand_2);
};

int calculator ::add(int op_1, int op_2)
{
    return op_1 + op_2;
}

int calculator ::subtract(int op_1, int op_2)
{
    return op_1 - op_2;
}

int calculator ::multiply(int op_1, int op_2)
{
    return op_1 * op_2;
}

float calculator ::divide(int op_1, int op_2)
{
    if (op_2 == 0)
    {
        std::cout << "Illegal operation\n";
        return -1;
    }
    else
    {
        return (float)op_1 / op_2;
    }
}
int main()
{
    calculator calc;
    char flag;
    do
    {
        int op_1, op_2, choice, result;

        std::cout << "Enter first operand\n";
        std::cin >> op_1;
        std::cout << "Enter second operand\n";
        std::cin >> op_2;

        std::cout << "Enter the corresponding number to perform that function\n"
                  << "1.Add\n"
                  << "2.Subtract\n"
                  << "3.Multiply\n"
                  << "4.Divide\n";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            result = calc.add(op_1, op_2);
            std::cout << result << std::endl;
            break;
        case 2:
            result = calc.subtract(op_1, op_2);
            std::cout << result << std::endl;
            break;
        case 3:
            result = calc.multiply(op_1, op_2);
            std::cout << result << std::endl;
            break;
        case 4:{
            float result = calc.divide(op_1, op_2);
            std::cout << result << std::endl;
            break;
        }
        default:
            std::cout << "Enter correct choice\n";
        }
        std::cout<<"Press ( Y / y ) to continue , else press ( N / n ) key to stop \n ";
        std::cin>>flag;
    }while( flag == 'Y' || flag == 'y' );

    return 0;
}