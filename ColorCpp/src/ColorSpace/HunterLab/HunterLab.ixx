﻿export module ColorCpp:HunterLab;

export namespace colorcpp
{
    /// <summary>
    /// Hunter Lab色空間
    /// </summary>
    struct HunterLab
    {
        double l;
        double a;
        double b;

        friend constexpr bool operator==(const HunterLab& a, const HunterLab& b) = default;
    };
}