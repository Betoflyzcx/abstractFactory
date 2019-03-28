#include "gtest/gtest.h"
#include "string.h"
#include "robustshapesfactory.h" // these aren't being included becasue they
#include "simpleshapesfactory.h" // in the same directory find a way to include
				 // them --> perhaps a link to files? 

// Test Fixture
class shapeTest: testing::Test // notice lower case
{
	public:
	Shape* shape;
 	shapeTest(); // treat constructor as a function
	
	~shapeTest()
	{
		delete shape;
	}
	private:
};
// Test

	// has to reference to Test Fixture Created
TEST_F(shapeTest, TotalInt )
{
	EXPECT_EQ(0, shape->Total);
}
int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
