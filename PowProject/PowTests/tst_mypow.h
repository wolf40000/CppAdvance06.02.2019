#pragma once

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "mypow.h"

using namespace testing;

namespace MyPow = MyLib::Math::Pow;

TEST(POW, POW23)
{
    const double pow_res_etalon{8.0};

    const double pow_res_fact{ MyPow::pow(2, 3) };

    ASSERT_DOUBLE_EQ(pow_res_etalon, pow_res_fact);
}
