#include<iostream>
#include<gtest/gtest.h>
using namespace std; 

int add(int a, int b){
    int total=0;
    total=a+b;
    return total;
}
//int T1_Total;
TEST(addition, add){
    
    EXPECT_EQ(add(2,2),4);
   // T1_total=add(2,2);
}
// TEST(Valid, checkT1Total)(

//     EXPECT_EQ(T1_Total,4);
// )
int main(int argc, char **argv){

::testing::InitGoogleTest(&argc,argv);
return RUN_ALL_TESTS();

}