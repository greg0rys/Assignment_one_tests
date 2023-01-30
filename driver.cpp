#include <unistd.h>
#include "driver.h"


void printStats(ChickenYard * yard, Player * player1, Player * player2)
{
    static int roundCounter = 1;
    int p1Score = 0, p2Score = 0;
    player1->getPoints(p1Score);
    player2->getPoints(p2Score);
    cout << " ROUND: " << roundCounter++ << endl;
    cout << "\tTotal Bones: " << yard->getCount() << endl;
    cout << "\tScores: \t" << "Player 1: " << p1Score
         << "\t Player 2: " << p2Score << endl;
    cout << *player1 << endl;
}


void gameStart()
{
    auto * yard = new ChickenYard();
    auto * player1 = new Player();
    auto * player2 = new Player();

    yard->getHand(player1);
    yard->getHand(player2);
    printStats(yard, player1, player2);
    yard->draw(player1);
}

int main()
{
   gameStart();

    return 0;
}





