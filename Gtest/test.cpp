#include "pch.h"
#include "MagazynIO/user.cpp"

namespace UserTest {
	TEST(findlogin, loginWrong) {
		user testuser1 = user("string1", "string2", "string3", 123, 321, "string4", "string5", "string6");
		EXPECT_EQ(testuser1.findLogin("string1"), false);
		EXPECT_TRUE(true);
	} 
	TEST(findlogin, loginCorrect) {
		user testuser1 = user("string1", "string2", "string3", 123, 321, "string4", "string5", "string6");
		EXPECT_EQ(testuser1.findLogin("string5"), true);
		EXPECT_TRUE(true);
	}

	TEST(checkPassword, passwordCorrect) {
		user testuser1 = user("string1", "string2", "string3", 123, 321, "string4", "string5", "string6");
		EXPECT_EQ(testuser1.checkPassword("string6"), true);
		EXPECT_TRUE(true);
	}

	TEST(checkPassword, passwordWrong) {
		user testuser1 = user("string1", "string2", "string3", 123, 321, "string4", "string5", "string6");
		EXPECT_EQ(testuser1.checkPassword("wrongpassword"), false);
		EXPECT_TRUE(true);
	}
}