#include<gtest/gtest.h>
#include "Pcalc.cpp"

class calcResult : public ::testing::TestWithParam<int>{
    protected:
        calculator output;

};

TEST_P(calcResult,DISABLED_additionParam){
    int x= GetParam();
    ASSERT_EQ(output.addOne(x),output.result);
    cout<<"output addOne(x):"<<output.addOne(x)<<endl;

}

TEST_P(calcResult,DISABLED_subtractionParam){
    int x= GetParam();
    ASSERT_EQ(output.subOne(x),output.result);
    cout<<"output subOne(x):"<<output.subOne(x)<<endl;

}

TEST_P(calcResult,AddParam){
    int x= GetParam();
    int y=GetParam();
    ASSERT_EQ(output.add(x,y),output.result);
    cout<<"Output add(x,y):"<<output.add(x,y)<<endl;
}

INSTANTIATE_TEST_CASE_P(AdditionValue,calcResult,::testing::Values(4,8,2,1));


int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}