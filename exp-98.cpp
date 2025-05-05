#include <iostream>
#include <cstring> 
using namespace std;

class Game {
    int score;
public:
    Game():score(0){}
    
    void playerAction(const char* action) {
        if(strcmp(action, "hit") == 0) score += 10;
        else if(strcmp(action, "miss") == 0) score -= 5;
        else if(strcmp(action, "bonus") == 0) score += 20;
    }
    
    int getScore() { return score; }
};

int main() {
    Game g;
    g.playerAction("hit");
    g.playerAction("bonus");
    g.playerAction("miss");
    cout << g.getScore() << endl; // Output the score
    return 0;
}