// Copyright 2026 NNTU-CS
#include <gtest/gtest.h>
#include "alg.h"

TEST(CheckPrime, ReturnsFalseForZero) {
  EXPECT_FALSE(checkPrime(0));
}

TEST(CheckPrime, ReturnsFalseForOne) {
  EXPECT_FALSE(checkPrime(1));
}

TEST(CheckPrime, ReturnsTrueForTwo) {
  EXPECT_TRUE(checkPrime(2));
}

TEST(CheckPrime, ReturnsTrueForSmallPrimes) {
  EXPECT_TRUE(checkPrime(3));
  EXPECT_TRUE(checkPrime(5));
  EXPECT_TRUE(checkPrime(7));
}

TEST(CheckPrime, ReturnsFalseForComposites) {
  EXPECT_FALSE(checkPrime(4));
  EXPECT_FALSE(checkPrime(9));
  EXPECT_FALSE(checkPrime(100));
}

TEST(CheckPrime, ReturnsTrueForLargePrime) {
  EXPECT_TRUE(checkPrime(999983));
}

TEST(NPrime, FirstPrimeIsTwo) {
  EXPECT_EQ(2u, nPrime(1));
}

TEST(NPrime, SecondPrimeIsThree) {
  EXPECT_EQ(3u, nPrime(2));
}

TEST(NPrime, FifthPrimeIsEleven) {
  EXPECT_EQ(11u, nPrime(5));
}

TEST(NPrime, TenthPrimeIsTwentyNine) {
  EXPECT_EQ(29u, nPrime(10));
}

TEST(NextPrime, NextAfterFourIsFive) {
  EXPECT_EQ(5u, nextPrime(4));
}

TEST(NextPrime, NextAfterElevenIsThirteen) {
  EXPECT_EQ(13u, nextPrime(11));
}

TEST(NextPrime, NextAfterTwoIsThree) {
  EXPECT_EQ(3u, nextPrime(2));
}

TEST(SumPrime, SumUpToTenIsSeventeen) {
  EXPECT_EQ(17u, sumPrime(10));
}

TEST(SumPrime, SumUpToTwoIsZero) {
  EXPECT_EQ(0u, sumPrime(2));
}

TEST(SumPrime, SumUpToTwentyIsSeventySeven) {
  EXPECT_EQ(77u, sumPrime(20));
}
