#include "DOJO.h"
#include <algorithm>
#include <map>



/*std::vector<int> Card::highestNumber(std::vector<int> numbers1, std::vector<int> numbers2)
{
    struct myclass {
        bool operator() (int i,int j) { return (i<j);}
    } myobject;

    std::sort (numbers1.begin(), numbers1.end(), myobject);
    std::sort (numbers2.begin(), numbers2.end(), myobject);

    for (int i = 0; i <numbers1.size(); ++i) {
        if (numbers1.size()-i-1>numbers2.size()-i-1)
            return numbers1;
        else
            return numbers2;

    }
}*/

CardsValue Card::get_cardsValue() const
{
    return _cardsValue;
}

CardsColor Card::get_cardsColor() const
{
    return _cardsColor;
}

void Card::set_cardsValue(CardsValue _cardsValue)
{
    Card::_cardsValue = _cardsValue;
}

void Card::set_cardsColor(CardsColor _cardsColor)
{
    Card::_cardsColor = _cardsColor;
}

Card::Card(CardsValue _cardsValue, CardsColor _cardsColor) : _cardsValue(_cardsValue), _cardsColor(_cardsColor)
{

}

std::string Card::whoWin(std::map<std::string, std::vector<Card>> player1, std::map<std::string, std::vector<Card>> player2)
{
    std::string winner = "";
    std::vector<Card> numbers1;
    std::vector<Card> numbers2;
    struct myclass {
        bool operator() (int i,int j) { return (i<j);}
    } myobject;

    std::sort (numbers1.begin(), numbers1.end(), myobject);
    std::sort (numbers2.begin(), numbers2.end(), myobject);

    for (int i = 0; i <numbers1.size(); ++i) {
        if (numbers1.size() - i - 1 > numbers2.size() - i - 1)

            return winner;
        else
            return winner;
    }
}

std::map<std::string, std::vector<Card>> Card::getPlayers()
{
    std::map<std::string, std::vector<Card>> players;
    std::string white = "White";
    std::vector<Card> numbers3 = {Card(CardsValue::TWO,CardsColor::H), Card(CardsValue::THREE,CardsColor::D), Card(CardsValue::FIVE,CardsColor::S),
                                  Card(CardsValue::NINE,CardsColor::C), Card(CardsValue::K,CardsColor::D) };
    players.insert(std::pair<std::string, std::vector<Card>> (white, numbers3));
    std::string black = "Black";
    std::vector<Card> numbers4 = {Card(CardsValue::TWO,CardsColor::C), Card(CardsValue::THREE,CardsColor::H), Card(CardsValue::FOUR,CardsColor::S),
                                  Card(CardsValue::EIGHT,CardsColor::C), Card(CardsValue::A,CardsColor::H) };
    players.insert(std::pair<std::string, std::vector<Card>> (black, numbers4));
    return players;
}

std::vector<Card> Card::getCards()
{
    return _cards;
}
void Card::addCard(Card card)
{
        _cards.push_back(card);
}
