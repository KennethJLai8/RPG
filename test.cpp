#include "gtest/gtest.h"
#include "narrative_test.hpp"
#include "battle_test.hpp"
#include "base_test.hpp"
#include "attack_test.hpp"
#include "block_test.hpp"
#include "cc_test.hpp"

int main(int argc,char **argv){
        ::testing::InitGoogleTest(&argc,argv);
        return RUN_ALL_TESTS();
}
