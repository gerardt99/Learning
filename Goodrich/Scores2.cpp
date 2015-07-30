#include<Scores>

Scores::Scores(int maxEnt)  {           // constructor
    maxEntries = maxEnt;                // save the max size
    entries = new GameEntry[maxEntries];  //allocate array storage
    numEntries = 0;                       // initially no elements
}

Scores::~Scores() {                     // destructor
    delete[] entries;
}
