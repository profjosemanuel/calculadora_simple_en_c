/ *
 * This program prompts the user to enter two numbers (operands)
 * and an arithmetic operator (+, -, *, /). It then performs the
 * calculation and prints the result, handling division by zero errors.
 */
int main() {
    int operator;
    double operand1, operand2, result;
    
    operator = 3;
    operand1 = 10;
    operand2 = 2;

    if (operator==0){
        return operand1 + operand2;

    }

    if (operator==1){
        return operand1 - operand2;

    }   


    if (operator==2){
        return operand1 * operand2;

    }   

     if (operator==3){
        return operand1 / operand2;

    }    
  
 
    return 0;
}
