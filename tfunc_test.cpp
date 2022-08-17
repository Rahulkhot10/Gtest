#include<iostream>
#include<gtest/gtest.h>
using namespace std;
//#include "func.cpp"


//#define TEST_F(test_fixture,test_name)
class Bank {
    public:
    int balance;
    
    Bank(int bal): balance(bal){}

    void increament(int incr){
        balance+=incr;
    }
    void decreament(int dcr){
        balance-=dcr;
    }
    int getval(){
        return balance;
    }
};

   
 struct bankBalance : public testing::Test{
        
        Bank *tl;
        void SetUp(){
            tl = new Bank(100);
            cout<<"set up"<<endl;
        }

        // void TearDown(){
        //     delete tl;
        //     cout<<"tear down"<<endl;
        // }
        

    };

// int readUserInput(){
//     int ExpectedBalane;
//     cout<<"Enter expected balance"<<endl;
//     cin>>ExpectedBalane;
//     return ExpectedBalane;
// }

TEST_F(bankBalance, credit){
        //ACT
     tl->increament(100);

    //ASSERT
    EXPECT_EQ(tl->getval(),200);


}

TEST_F(bankBalance, debit){
    tl->decreament(100);
    EXPECT_EQ(tl->getval(),100);
}

int main(int argc, char **argv){

::testing::InitGoogleTest(&argc,argv);
return RUN_ALL_TESTS();

}