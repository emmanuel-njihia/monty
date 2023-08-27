#include "monty.h"

/**
  * opcode_search - searches for opcode in struct
  * Return: Nothing, void
  */
void opcode_search(void)
{
	if (element->tokened[0] == NULL)
        return;

    if (element->tokened[0][0] == '#')
    {
        nop(NULL, 0);  // Call nop function for comments
        return;
    }

    char *opcode = element->tokened[0];

    if (strcmp(opcode, "push") == 0)
        push(NULL, 0);
    else if (strcmp(opcode, "pall") == 0)
        pall(NULL, 0);
    else if (strcmp(opcode, "pint") == 0)
        pint(NULL, 0);
    else if (strcmp(opcode, "pop") == 0)
        pop(NULL, 0);
    else if (strcmp(opcode, "div") == 0)
        divide(NULL, 0);
    else if (strcmp(opcode, "add") == 0)
        add(NULL, 0);
    else if (strcmp(opcode, "swap") == 0)
        swap(NULL, 0);
    else if (strcmp(opcode, "mul") == 0)
        mul(NULL, 0);
    else if (strcmp(opcode, "mod") == 0)
        mod(NULL, 0);
    else if (strcmp(opcode, "sub") == 0)
        sub(NULL, 0);
    else if (strcmp(opcode, "nop") == 0)
        nop(NULL, 0);
    else
        exit_function(2);  // Opcode not recognized

}
