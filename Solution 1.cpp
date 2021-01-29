#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
        cout << "begin\n";

        //A and B are the variables for temporarily holding the values of the numbers to be checked.
        int A = 0;
        int B = 0;

        //Sol is the solution to the problem, found by multiplying the two correct numbers.
        int Sol = 0;

        cout << "var intiialized\n";

        //reading from the text file to input stream
        ifstream is("input.txt");  
        string line;

        cout << "file opened\n";

        //creating a vector from the input stream
        vector<int> dataList;
        dataList.clear();

        cout << "vector created\n";

        //Let's start iterating through the list
        if (is.is_open())
        {
            for (line; getline(is, line);)
            {
                dataList.push_back(stoi(line));
            }

            //A Loop
            for (int i = 0; i < dataList.size(); i++)
            {
                A = dataList[i];
                cout << "A: " << A << "\n";

                //B Loop
                for (int j = 0; j < dataList.size(); j++)
                {
                    B = dataList[j];
                    cout << "B: " << B << "\n";

                   Sol = A * B;

                    if (A + B == 2020 && A != B)
                    {
                        //answer
                        cout << "The two numbers are " << A << " and " << B << " and their product is " << Sol << "\n";
                        cin.ignore();
                        break;                       
                    }
                }
                
                if (A + B == 2020)
                {
                    break;
                }

            }

            
        }    
}
