#include "hiker.h"
#include <unity_fixture.h>

TEST_GROUP(Hiker);

TEST_SETUP(Hiker)
{
}

TEST_TEAR_DOWN(Hiker)
{
}

TEST(Hiker, Life_the_universe_and_everything)
{
    TEST_ASSERT_EQUAL(42, answer());
}
