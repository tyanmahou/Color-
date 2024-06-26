﻿export module ColorCpp:HSI;
import :Math;
import :ColorUtil;

export namespace colorcpp
{
    /// <summary>
    /// HSI
    /// </summary>
    struct HSI
    {
        /// <summary>
        /// Hue 色相 [0, 360)
        /// </summary>
        double h;

        /// <summary>
        /// Saturation 彩度 [0, 1]
        /// </summary>
        double s;

        /// <summary>
        /// Intensity 強度 [0, 1]
        /// </summary>
        double i;

        constexpr HSI operator +(const HSI& other) const noexcept
        {
            return{
                ColorUtil::RepeatHue360(h + other.h),
                Math::Saturate(s + other.s),
                Math::Saturate(i + other.i)
            };
        }
        constexpr HSI& operator +=(const HSI& other) noexcept
        {
            *this = (*this) + other;
            return *this;
        }
        constexpr HSI operator -(const HSI& other) const noexcept
        {
            return{
                ColorUtil::RepeatHue360(h - other.h),
                Math::Saturate(s - other.s),
                Math::Saturate(i - other.i)
            };
        }
        constexpr HSI& operator -=(const HSI& other) noexcept
        {
            *this = (*this) - other;
            return *this;
        }
        friend constexpr bool operator==(const HSI& a, const HSI& b) = default;
    };
}
