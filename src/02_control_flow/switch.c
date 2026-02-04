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