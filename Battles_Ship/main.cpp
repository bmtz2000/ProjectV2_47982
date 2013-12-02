#include <iostream>
#include <ctime>

using namespace std;

const in rows = 10;
const int columns = 10;
int maxboats = 10;

int grid [rows][columns];

//clears the field
void clear (){

    for (int x = 0; x < rows; x++){

        for (int y = 0; y < columns; y++){
            grid [x][y] = 0;
        }
    }
}


void show (){

    for (int x = 0; x < rows; x++){

        for (int y = 0; y < columns; y++){
            cout << grid [x][y] << " \n";
        }
    }
}

//figures out placement of the ships on the battlefield
int shipnum(){

    int z = 0;

    for (int x = 0; x < rows; x++){

        for (int y = 0; y < columns; y++){

            if (grid [x][y] == 1){
                z++;
            }
        }
    }
    return z;
}

void shipsplace


int main(){


    return 0;
}


