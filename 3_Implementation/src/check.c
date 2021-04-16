#include "tictactoe.h"

int checkwin()
{

    
    if (box[1] == box[2] && box[2] == box[3])
        return 1;
        
    else if (box[4] == box[5] && box[5] == box[6])
        return 1;
        
    else if (box[7] == box[8] && box[8] == box[9])
        return 1;
        
    else if (box[1] == box[4] && box[4] == box[7])
        return 1;
        
    else if (box[2] == box[5] && box[5] == box[8])
        return 1;
        
    else if (box[3] == box[6] && box[6] == box[9])
        return 1;
        
    else if (box[1] == box[5] && box[5] == box[9])
        return 1;
        
    else if (box[3] == box[5] && box[5] == box[7])
        return 1;
        
    else if (box[1] != '1' && box[2] != '2' && box[3] != '3' &&
        box[4] != '4' && box[5] != '5' && box[6] != '6' && box[7] 
        != '7' && box[8] != '8' && box[9] != '9')

        return 0;
    else
        return  - 1;
}
