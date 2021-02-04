#include <iostream>
#include <vector>
#include <algorithm>
 
int main()
{
    char selection{};
    std::vector<int> vector;
 
    do
    {
        std::cout << "P - Print numbers"                << std::endl;
        std::cout << "A - Add a number"                 << std::endl;
        std::cout << "M - Display mean of the numbers"  << std::endl;
        std::cout << "S - Display the smallest number"  << std::endl;
        std::cout << "L - Display the largest number"   << std::endl;
        std::cout << "Q - Quit"                         << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> selection;
 
        if (selection == 'P' || selection == 'p')
        {
            if (vector.size() != 0){
 
                std::cout << "[ ";
                for (size_t i{}; i < vector.size(); i++)
                    std::cout << vector.at(i) << " ";
                std::cout << "]";
                std::cout << std::endl;
                std::cout << std::endl;
 
            }
            else
            {
                std::cout << "The list is empty - []" << std::endl;
                std::cout << std::endl;
            }   
        }
        
        if (selection == 'A' || selection == 'a')
        {
            std::cout << "Add a number to the list: ";
            int add_number{};
            std::cin >> add_number;
            vector.push_back (add_number);
            std::cout << add_number << " is added to the list." << std::endl;
            std::cout << std::endl;
        }
 
        if (selection == 'M' || selection == 'm')
        {   
            double avrg{};
            double sum{};
            for (size_t i{}; i <= vector.size(); ++i)
                sum += vector[i];
                
            avrg = sum/vector.size();
 
            std::cout << "The average is: " << avrg << std::endl;
            std::cout << std::endl;
 
        }
        if (selection == 'S' || selection == 's')
        {
            if (vector.size() != 0)
            {
                int min = *min_element(vector.begin(), vector.end());
                std::cout << "The minimum in the list: " << min << std::endl;
                std::cout << std::endl;
 
            }
            else
            {
                std::cout << "The list is empty - no smallest value.";
                std::cout << std::endl;
                std::cout << std::endl;
            }
            
        }
        if (selection == 'L' || selection == 'l')
        {
            int max{*max_element(vector.begin(), vector.end())};
            std::cout << "The maximum value of the vector: " << max;
            std::cout << std::endl;
            std::cout << std::endl;
        }

    } while (selection != 'q' && selection != 'Q');
 
    return 0;   
}