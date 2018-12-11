#ifndef DOJO_DOJO_H
#define DOJO_DOJO_H

#include <vector>
#include <iostream>
#include <map>

enum class CardsValue {
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    J,
    Q,
    K,
    A
};

enum class CardsColor{
    C,
    D,
    H,
    S
};

class Card
{
public:

    Card(CardsValue _cardsValue, CardsColor _cardsColor);

    CardsValue get_cardsValue() const;

    CardsColor get_cardsColor() const;

    void set_cardsValue(CardsValue _cardsValue);

    void set_cardsColor(CardsColor _cardsColor);

    std::vector<Card> getCards();

    std::map<std::string, std::vector<Card>> getPlayers();

    void addCard(Card card);

    std::string whoWin(std::map<std::string, std::vector<Card>> player1, std::map<std::string, std::vector<Card>> player2);



private:
    CardsValue _cardsValue;
    CardsColor _cardsColor;
    std::vector<Card> _cards;
};



#endif //DOJO_DOJO_H
