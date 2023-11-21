#include <gtest/gtest.h>
#include <phonetic.hpp>

using tts::convertTextToSound;
using tts::isEqual;

TEST(tts, tts0)
{
    EXPECT_EQ(isEqual(convertTextToSound("Rubin"), "R150"), true);
    EXPECT_EQ(convertTextToSound("Rubin"), "R150");
}
TEST(tts, tts1)
{
    EXPECT_EQ(convertTextToSound("Ackermann"), "A265");

}
TEST(tts, tts2)
{
    EXPECT_EQ(convertTextToSound("Smith"), "S530");
}
TEST(tts, tts3)
{
    EXPECT_EQ(convertTextToSound("Rodriguez"), "R365");
}
TEST(tts, tts4)
{
    EXPECT_EQ(convertTextToSound("Ashcraft"), "A261");
}
TEST(tts, tts5)
{
    EXPECT_EQ(convertTextToSound("Davis"), "D120");
}
TEST(tts, tts6)
{
    EXPECT_EQ(convertTextToSound("Ekzampul"), "E251");
}
TEST(tts, tts7)
{
    EXPECT_EQ(convertTextToSound("Lloyd"), "L300");
}
// TEST(tts, tts8)
// {
//     EXPECT_EQ(convertTextToSound("Ellery"), "L460");
// }