﻿import ColorPlus2;

#include "catch.hpp"

namespace
{
    using namespace cp2;

    TEST_CASE("Hex")
    {
        SECTION("Construct")
        {
            REQUIRE(Hex() == "000000FF");
            REQUIRE(Hex("123").hex() == "112233FF");
            REQUIRE(Hex("1234").hex() == "11223344");
            REQUIRE(Hex("1234").hex() == "11223344");
            REQUIRE(Hex("123456").hex() == "123456FF");
            REQUIRE(Hex("12345678").hex() == "12345678");

            REQUIRE(Hex("#123").hex() == "112233FF");
            REQUIRE(Hex("#1234").hex() == "11223344");
            REQUIRE(Hex("#1234").hex() == "11223344");
            REQUIRE(Hex("#123456").hex() == "123456FF");
            REQUIRE(Hex("#12345678").hex() == "12345678");

            REQUIRE(Hex(L"123") == Hex("123"));
            REQUIRE(Hex(u"123") == Hex("123"));
            REQUIRE(Hex(U"123") == Hex("123"));
            REQUIRE(Hex(u8"123") == Hex("123"));
        }
        SECTION("Construct lower")
        {
            REQUIRE(Hex("12abcdef") == Hex("12ABCDEF"));
        }
        SECTION("Hex To RGBA32")
        {
            RGBA32 rgba = ColorCast<RGBA32>(Hex("#123AB4CD"));
            REQUIRE(rgba.r == 16 * 1 + 2);
            REQUIRE(rgba.g == 16 * 3 + 10);
            REQUIRE(rgba.b == 16 * 11 + 4);
            REQUIRE(rgba.a == 16 * 12 + 13);
        }
        SECTION("Hex (lower) To RGBA32")
        {
            constexpr Hex hex("#123ab4cd");
            RGBA32 rgba = ColorCast<RGBA32>(hex);
            REQUIRE(rgba.r == 16 * 1 + 2);
            REQUIRE(rgba.g == 16 * 3 + 10);
            REQUIRE(rgba.b == 16 * 11 + 4);
            REQUIRE(rgba.a == 16 * 12 + 13);
        }
        SECTION("RGBA32 to Hex")
        {
            constexpr RGBA32 rgba{
                16 * 1 + 2,
                16 * 3 + 10,
                16 * 11 + 4,
                16 * 12 + 13
            };
            
            Hex hex = ColorCast<Hex>(rgba);
            REQUIRE(hex == "123AB4CD");
        }

    }
}
