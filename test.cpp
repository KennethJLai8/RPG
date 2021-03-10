#include "gtest/gtest.h"
//#include "base_test.hpp"
#include "attack_test.hpp"
#include "block_test.hpp"
#include "cc_test.hpp"


int main(int argc,char **argv){
        ::testing::InitGoogleTest(&argc,argv);
        return RUN_ALL_TESTS();
}
