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

string playCard(queue<PlayingCard> & queue){

}

void compare(PlayingCard p1Card, PlayingCard p2Card, queue<PlayingCard> & p1queue, queue<PlayingCard> & p2queue, int & rounds){
    
}

void war(PlayingCard p1Card, PlayingCard p2Card, queue<PlayingCard> & p1queue, queue<PlayingCard> & p2queue){
    
    
    compare(p1Card, p2Card, p1queue, p2queue);
}

int main() {
    list<PlayingCard> cards = generateShuffledDeck();
    queue<PlayingCard> p1queue;
    queue<PlayingCard> p2queue;
    dealCards(cards,p1queue,p2queue);
    int rounds = 0;

    // Play the game until one players wins and report how many rounds that took
    PlayingCard p1Card(0,0);
    PlayingCard p2Card(0,0);


    do{
        rounds++;
        //both players put their cards down
        p1Card = p1queue.front();
        p1queue.pop();
        cout << "Player 1 plays " << p1Card.longCardName() << endl;
        p2Card = p2queue.front();
        p2queue.pop();
        cout << "Player 2 plays " << p2Card.longCardName() << endl;
        //if p1 card has higher number, they collect both cards and add to hand
        if (p1Card.shortCardName() > p2Card.shortCardName()){
            p1queue.push(p1Card);
            p1queue.push(p2Card);
            cout << "Player 1 wins round" << rounds << "!\n";
        }
        //else p2 wins, collects both cards
        else if (p1Card.shortCardName() < p2Card.shortCardName()){
            p2queue.push(p1Card);
            p2queue.push(p2Card);
            cout << "Player 2 wins round " << rounds << "!\n";
        }
        //War
        else{
            list<PlayingCard> p1PlayPile;
            list<PlayingCard> p2PlayPile;
            cout << "Cards are equal. Commence the war!\n";
            p1PlayPile.push_front(p1Card);
            p2PlayPile.push_front(p2Card);

            
            for(int i = 0; i < 3; i++){
                //player 1 playpile
                p1Card = p1queue.front();
                p1queue.pop();
                p1PlayPile.push_front(p1Card);
                cout << "Player 1 lays card " << i << " face down.\n";

                //player 2 playpile
                p2Card = p2queue.front();
                p2queue.pop();
                p2PlayPile.push_front(p2Card);
                cout << "Player 1 lays card " << i << " face down.\n";
            }

            //both players play a new card, face up
            p1Card = p1queue.front();
            p1queue.pop();
            cout << "Player 1 plays " << p1Card.longCardName() << endl;
            p2Card = p2queue.front();
            p2queue.pop();
            cout << "Player 2 plays " << p2Card.longCardName() << endl;

            //check who gets all the cards
            //if p1 card has higher number, they collect ALL cards and add to hand
            if (p1Card.shortCardName() > p2Card.shortCardName()){
                for(auto itr : p1PlayPile){
                    p1queue.push(itr);
                }
                
                p1queue.push(p2Card);
                cout << "Player 1 wins round" << rounds << "!\n";
            }

            else if (p1Card.shortCardName() < p2Card.shortCardName()){
                p2queue.push(p1Card);
                p2queue.push(p2Card);
                cout << "Player 2 wins round " << rounds << "!\n";
            }
            
        }
    }while (!p1queue.empty() && !p2queue.empty())


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
