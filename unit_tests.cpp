#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "perfectnumber.h"

TEST_CASE("Test Perfect Numbers") {
    SUBCASE("Test Known Perfect Numbers") {
        std::vector<int> testVec = {6, 28, 496};
        auto result = displayPerfectNumbers(testVec);
        CHECK_EQ(result.size(), testVec.size());
        for (bool isPerfect : result) {
            CHECK(isPerfect);
        }
    }

    SUBCASE("Test Not Perfect Numbers") {
        std::vector<int> testVec = {5, 25, 31};
        auto result = displayPerfectNumbers(testVec);
        REQUIRE_EQ(result.size(), testVec.size());
        for (bool isPerfect : result) {
            WARN(!isPerfect);
        }
    }

    SUBCASE("Test Edge Cases") {
        std::vector<int> testVec = {1, 2};
        auto result = displayPerfectNumbers(testVec);
        CHECK_EQ(result.size(), testVec.size());
        REQUIRE(!result[0]); 
        CHECK(!result[1]); 
    }
}
