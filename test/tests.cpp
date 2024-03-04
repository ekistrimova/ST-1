// Copyright 2024 Kistrimova Ekaterina
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(Check_prime, TestSmallNum) {
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(8));
    EXPECT_FALSE(checkPrime(15));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(7));
    EXPECT_TRUE(checkPrime(13));
}

TEST(Check_prime, TestBigNum) {
    EXPECT_FALSE(checkPrime(5e8 + 10));
    EXPECT_TRUE(checkPrime(27'644'437));
}

TEST(Check_prime, TestOneIsPrime) {
    EXPECT_FALSE(checkPrime(1));
}

TEST(N_Prime, TestSmallNum) {
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(4), 7);
    EXPECT_EQ(nPrime(7), 17);
}

TEST(N_Prime, TestAnyNum) {
    EXPECT_EQ(nPrime(500), 3571);
    EXPECT_EQ(nPrime(100000), 1299709);
}

TEST(NextPrime, TestSmallNum) {
    EXPECT_EQ(nextPrime(8), 11);
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(21), 23);
}

TEST(NextPrime, TestBigNum) {
    EXPECT_EQ(nextPrime(1e9 + 7), 1e9 + 9);
    EXPECT_EQ(nextPrime(1e9 + 8), 1e9 + 9);
}

TEST(SPrime, TestSmallNum) {
    EXPECT_EQ(sumPrime(10), 17);
    EXPECT_EQ(sumPrime(15), 41);
}

TEST(SPrime, TestAnyNum) {
    EXPECT_EQ(sumPrime(1000), 76127);
    EXPECT_EQ(sumPrime(2875), 552753);
}

TEST(SPrime, TestDifSum) {
    int res1 = sumPrime(20);
    int res2 = sumPrime(25);
    EXPECT_EQ(res2 - res1, 23);
}

TEST(SPrime, TestSumLessTwoMil) {
    EXPECT_EQ(sumPrime(2e6), 142913828922);
}
