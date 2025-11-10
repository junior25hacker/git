#define PHELLO_H
#ifdef PHELLO_H
#include<iostream>
void hellOo()
{
    int i;
    for(i=0;i<5;i++)
    {
        // Print Hello, Universe! five times
        std::cout << "Hello, Universe!" << std::endl;

    }
    std::cout << "Finished printing Hello, Universe!" << std::endl;
}
#endif PHELLO_H