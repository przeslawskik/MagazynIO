#include "pch.h"
#include "MagazynIO/user.cpp"

TEST(loginWrong, findlogin) {
	user testuser1 = user("string1","string2","string3",123,321,"string4","string5","string6");
  EXPECT_EQ(testuser1.findLogin("string1"), false);
  EXPECT_TRUE(true);
}

TEST(loginCorrect, findlogin) {
	user testuser1 = user("string1", "string2", "string3", 123, 321, "string4", "string5", "string6");
	EXPECT_EQ(testuser1.findLogin("string5"), true);
	EXPECT_TRUE(true);
}