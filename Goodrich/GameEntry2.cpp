#include<GameEntry>

GameEntry::GameEntry(const string& n, int s)  // constructor
    : name(n), score(s) {}

string GameEntry::getName() const {return name;}
int GameEntry::getScore() const {return score;}

