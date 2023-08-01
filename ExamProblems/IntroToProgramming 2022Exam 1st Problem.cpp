#include <iostream>
//the yellow case is not handled correctly in this version 
const int MAX_SIZE = 1024;

int main() {
    char sequence[MAX_SIZE];

    int numMoves = 0;
    int maxMoves = 0;
    bool foundGreen = false;

    std::cin.getline(sequence, MAX_SIZE);


    for (int i = 0; sequence[i] != '\0'; i++) {
        if (sequence[i] == 'g' && sequence[i + 1] != '\0')
        {
            foundGreen = true;
            numMoves++;
        }
        else if (sequence[i] == 'y')
        {
            if (foundGreen && sequence[i + 1] == 'g') {
                numMoves++;
            } else {
                // If no green cell before '\0', it's an error
                if (sequence[i + 1] == '\0') {
                    std::cout << "Error: The robot didn't find a green cell before the end of the sequence.\n";
                    return 1;
                }
            }
        }
        else if (sequence[i] == 'r')
             {
                numMoves++;
                if (numMoves > maxMoves)
                {
                    maxMoves = numMoves;
                }
                foundGreen = false;//when reaching red cell switching foundGreen to false bc the only way to stop is to be on red cell
                numMoves = 0;
            }

        else {
                std::cout << "Error: Invalid color character '" << sequence[i] << "' at position " << i << ".\n";
                return 1;
            }
        }
        //if after these checks the bool is to true this means the robot didnt find red cell so unsuccessful
        if (foundGreen) {
            std::cout << "Error: The robot didn't find a red cell before the end of the sequence.\n";
            return 1;
        }
        std::cout << "Maximum number of moves: " << maxMoves << std::endl;

        return 0;
    }
