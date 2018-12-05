#include <gtest/gtest.h>
#include "Park.h"


TEST(test_carpark, test_getoldest){
    Park park;
    Car car1(1, "SGU-347", 1234, false);
    Car car2(1, "GHS-342", 1013, false);
    Car car3(1, "YGA-432", 999, false);
    park.addCar(car1);
    park.addCar(car2);
    park.addCar(car3);

    EXPECT_EQ(park.getOldest(), "YGA-432");
}

TEST(test_carpark, test_getPenalties){
    Park park;
    Car car1(1, "SGU-347", 1234, false);
    Car car2(1, "GHS-342", 1013, false);
    Car car3(1, "YGA-432", 999, false);
    park.addCar(car1);
    park.addCar(car2);
    park.addCar(car3);

    EXPECT_EQ(park.getPenalties().size(), 3);
}