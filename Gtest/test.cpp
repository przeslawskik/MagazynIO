#include "pch.h"
#include "MagazynIO/user.cpp"
#include "MagazynIO/product.cpp"

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

namespace ProductTest {

	TEST(changeCount,correctChangeVal) {
		product p1 = product("sruba",1000,"dlugosc 100mm","metalowa",0.01);
		p1.changeCount(1500);
		EXPECT_EQ(p1.getCount(),1500);
		EXPECT_TRUE(true);
	}

	TEST(getAreaOfProduct, totalProductArea) {
		product p1 = product("sruba", 1000, "dlugosc 100mm", "metalowa", 0.01);
		EXPECT_EQ(p1.getAreaOfProduct(), 10.0);
		EXPECT_TRUE(true);

	}

}