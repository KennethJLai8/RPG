#include "gtest/gtest.h"
#include "narrative_test.hpp"
#include "battle_test.hpp"


int main(int argc,char **argv){
        ::testing::InitGoogleTest(&argc,argv);
        return RUN_ALL_TESTS();
}
