/* /* 4. Write down your own header file ,where the calculator functions are defined(ADD,SUB,MUL,DIV).
Include it in your source code file 2 times. What kind of problem occurred?
Make changes to the header file using pre-processor directives such that code is included to the file only once, irrespective of the number of include directives. */

#ifndef _4calculator_H
#define _4calculator_H
int ADD(int x , int y);
int SUB(int x , int y);
int MUL(int x , int y);
int DIV(int x , int y);

int ADD(int x , int y)
{
return x+y;
}


int SUB(int x,int y)
{
return x-y;
}

int MUL(int x,int y)
{
return x*y;
}

int DIV(int x,int y)
{
return x/y;
}
#endif
