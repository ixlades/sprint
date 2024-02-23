#include "calculator.h"

void mx_err(int err) {
	if (err == INCORRECT_OPERAND)
		mx_printerr("error: invalid number\n");
	else if (err == INCORRECT_OPERATION)
		mx_printerr("error: invalid operation\n");
	else if (err == DIV_BY_ZERO) 
		mx_printerr("error: division by zero\n");
}



