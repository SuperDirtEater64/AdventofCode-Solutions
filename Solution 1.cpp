#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

int main()
    {
        //A and B are the variables for temporarily holding the values of the numbers to be checked.
        int A = 0;
        int B = 0;

        //Sol is the solution to the problem, found by multiplying the two correct numbers.
        int Sol = 0;

        
        std::ifstream is("input.txt");        

        //Let's start iterating through the list
        for (std::string line; getline(is, line);)
        {
            A = stoi (line);
                

            for (line; getline(is, line);)
                {
                    B = stoi(line);
                    Sol = A * B;

                    if (A * B == 2020)
                    {
                        //answer
                        {
                            std::cout << "The two numbers are " << A << " and " << B << " and their product is " << Sol << "/n";
                        }
                    }
                }
        }  
    }