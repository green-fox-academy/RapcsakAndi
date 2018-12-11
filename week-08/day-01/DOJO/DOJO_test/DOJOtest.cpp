#include <gtest/gtest.h>
#include "DOJO.h"
#include <vector>
#include <map>

TEST(simple_check, highest2){
    std::map<std::string, std::vector<Card>> player1;
    std::map<std::string, std::vector<Card>> player2;
    std::string expected = {black};

    EXPECT_EQ(whoWin( player1, player2), expected);
}