#include <stdio.h>
// If .. else
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
        return b;
}

const char* whoWins(int chooseTeam){
    switch(chooseTeam){
        case 1: return "Manchester City";
                break;
        case 2: return "Liverpool";
                break;
        case 3: return "Newcastle";
                break;
        default: return "Unknown winner";
                break;        
    }
}

int main(){// expect 10   
    printf("%d\n", max(2929, 2)); 
    printf("%s\n", whoWins(1));
}
