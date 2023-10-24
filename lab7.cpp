/*
* Alex Heidorn
* Created: 10-19-23
* CS2 Lab7
*  
*/

#include <iostream>
#include <list>
#include <stdlib.h>
#include <vector>
#include <queue>
using namespace std;

class PlayingCard {
private:
    int suitNo;
    int cardNo;
public:
    friend bool operator<(const PlayingCard &card1, const PlayingCard &card2) {
        return ((card1.cardNo < card2.cardNo) ||
                ((card1.cardNo == card2.cardNo) && (card1.suitNo < card2.suitNo)));
    }
    PlayingCard(int n, int s) { cardNo = n; suitNo = s; }
    static const string FULLSUITS[4];
    static const string SHORTSUITS[4];
    static const string CARDNAME[13];
    string shortCardName() { return CARDNAME[cardNo] + SHORTSUITS[suitNo]; }
    string longCardName() { return CARDNAME[cardNo] + FULLSUITS[suitNo]; }
};

const string PlayingCard::FULLSUITS[] = {"Clubs", "Diamonds", "Hearts", "Spades"};
const string PlayingCard::SHORTSUITS[] = {"C", "D", "H", "S"};
const string PlayingCard::CARDNAME[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};


int RandInRange(int low, int high) {
    return (low + rand()%(high - low + 1));
}

list<PlayingCard> generateShuffledDeck() {
    vector<PlayingCard> allCards;
    list<PlayingCard> shuffledCards;
    srand(time(0));
    for (int n = 0; n < 13; n++) {
        for (int s = 0; s < 4; s++) {
            allCards.push_back(PlayingCard(n,s));
        }
    }
    // for (auto c : allCards) {
    //    cout << c.shortCardName() << " " << endl;
    // }
    for (int i = 51; i >= 0; i--) {
        int choice = RandInRange(0,i);
        shuffledCards.push_back(allCards[choice]);
        allCards[choice] = allCards[i];
        allCards.pop_back();
    }
    return shuffledCards;
}

void dealCards(list<PlayingCard> cards, queue<PlayingCard> & p1queue, queue<PlayingCard> & p2queue) {
    while (!cards.empty()) {
        PlayingCard card = cards.front();
        cards.pop_front();
        p1queue.push(card);
        if (cards.empty()) {
            cerr << "WARNING! Uneven number of cards\n";
        }
        else {
            card = cards.front();
            cards.pop_front();
            p2queue.push(card);
        }
    }

}

/*string playCard(queue<PlayingCard> & queue){

}
*/

/* @ Params
* q: the queue that receives the cards
* playPile: the pile that GIVES the cards

*/
void addToQueue(queue<PlayingCard> & q, list<PlayingCard> & playPile){
    for(auto itr : playPile){
        cout << "Play pile has " << playPile.size() << " cards.\n";
        
        q.push(itr);
        playPile.pop_front();
        //check how many cards are in piles
        cout << "Play pile has " << playPile.size() << " cards.\n";
    }
}

//war prototype to be called in playAndCompare
void war(list<PlayingCard> & p1PlayPile, list<PlayingCard> & p2PlayPile, 
            queue<PlayingCard> & p1queue, queue<PlayingCard> & p2queue, int & rounds);
            
void playAndCompare(list<PlayingCard> & p1PlayPile, list<PlayingCard> & p2PlayPile, 
            queue<PlayingCard> & p1queue, queue<PlayingCard> & p2queue, int & rounds){
    //add a card to the play pile for both players
    p1PlayPile.push_front(p1queue.front());
    p1queue.pop();
    cout << "Player 1 plays " << p1PlayPile.front().longCardName() << endl;

    p2PlayPile.push_front(p2queue.front());
    p2queue.pop();
    cout << "Player 2 plays " << p2PlayPile.front().longCardName() << endl;

    //if p1 card has higher number, they collect ALL cards and add to hand
    if (p1PlayPile.front().shortCardName() > p2PlayPile.front().shortCardName()){
        p1queue.push(p1PlayPile.front());
        p1PlayPile.pop_front();
        p1queue.push(p2PlayPile.front());
        p2PlayPile.pop_front();
        cout << "Player 1 wins round" << rounds << "!\n";
    }

    else if (p1PlayPile.front().shortCardName() < p2PlayPile.front().shortCardName()){
        p2queue.push(p1PlayPile.front());
        p1PlayPile.pop_front();
        p2queue.push(p2PlayPile.front());
        p2PlayPile.pop_front();
        cout << "Player 2 wins round " << rounds << "!\n";
    }

    /*War fxn is useless, a player will always win a round. there will never be a tie
    * because suits have precedence too.
    else{
        war(p1PlayPile, p2PlayPile, p1queue, p2queue, rounds);
    }
    */

    //making sure players have correct number of cards
    string dummy;
    cout << "Player 1 has " << p1queue.size() << " cards.\n";
    cout << "Player 2 has " << p2queue.size() << " cards.\n";
    //cin >> dummy;
}

void war(list<PlayingCard> & p1PlayPile, list<PlayingCard> & p2PlayPile, 
            queue<PlayingCard> & p1queue, queue<PlayingCard> & p2queue, int & rounds){
    cout << "Cards are equal. Commence the war!\n";     

    //add 3 unknown cards to both players playPiles       
    for(int i = 0; i < 3; i++){
        //add check to see if a player runs out cards? means other player wins the war, takes all cards?

        //player 1 playpile
        p1PlayPile.push_front(p1queue.front());
        p1queue.pop();
        cout << "Player 1 lays card " << i << " face down.\n";

        //player 2 playpile
        p2PlayPile.push_front(p1queue.front());
        p2queue.pop();
        cout << "Player 2 lays card " << i << " face down.\n";
    }
    //play and compare a new card, calling war recursively if needed
    playAndCompare(p1PlayPile, p2PlayPile, p1queue, p2queue, rounds);
}

int main() {
    list<PlayingCard> cards = generateShuffledDeck();
    queue<PlayingCard> p1queue;
    queue<PlayingCard> p2queue;
    dealCards(cards,p1queue,p2queue);
    int rounds = 0;

    // Play the game until one players wins and report how many rounds that took
    list<PlayingCard> p1PlayPile;
    list<PlayingCard> p2PlayPile;

    cout << "Player 1 has " << p1queue.size() << " cards.\n";
    cout << "Player 2 has " << p2queue.size() << " cards.\n";
    do{
        rounds++;
        //both players put their cards down
        playAndCompare(p1PlayPile, p2PlayPile, p1queue, p2queue, rounds);
    }while (!p1queue.empty() && !p2queue.empty());

    string winner;
    if(p1queue.empty()){
        winner = "Player 2";
    }
    else{
        winner = "Player 1";
    }
    cout << winner << " won in " << rounds << " rounds!";


    /*do

        player 1 puts their top card down

        player 2 puts their top card down

        //compare fxn{
        if player 1's card has a higher number (A > K > Q > J > 10 > 9 > 8 > 7 > 6 > 5 > 4 > 3 > 2) then
            player 1 collects both cards and adds them to their pile of cards (their queue)
        else if player 2's card has a higher number
            player 2 collects both cards and adds them to their pile of cards
        else a "War" occurs
            war fxn{
            players add their top 3 cards to the played pile and 
            }

            compare{
                "play" their next card, and the process repeats
            }
        }

    until one player is out of cards

    the other player is declared the winner*/
    return 0;
}
