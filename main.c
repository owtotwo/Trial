#include <stdio.h>
#include <assert.h>

int add(int a, int b) { return a + b; }

void (A, B) {
    EXPECT_TRUE(add(1, 1) == 2);
    EXPECT_TRUE(add(1, 2) == 3);
    EXPECT_TRUE(add(2, 2) == 3);
    EXPECT_TRUE(add(2, 2) == 4);
}

TEST(A, b) {
    EXPECT_TRUE(add(100, -1) == 99);
}

TEST(B, a) {
    EXPECT_TRUE(add(-1, -1) == -2);
    EXPECT_TRUE(add(0, 0) == 0);
}

TEST(B, b) {
    EXPECT_TRUE(add(-100, 1) == -99);
    EXPECT_TRUE(add(-100, 100) == 0);
}

TEST(B, c) {
    EXPECT_TRUE(add(-100, 100) != 1);
}

TEST(C, a) {
    EXPECT_TRUE(!add(-1, 1));
}

int main() {
    int result = -1;
    RUN_ALL_TESTS(&result);
    return result;
}
