#include<GameEntry>

class Scores {                 // stores game high scores
public:
    Scores(int maxEnt = 10);   //constructor
    ~Scores()                  // destructor
    void add(const GameEntry& e);    // add a game entry
    GameEntry remove(int i)          // remove the ith entry
	    throw(IndexOutOfBounds);
private:
    int maxEntries;
    int numEntries;
    GameEntry* entries;
};
