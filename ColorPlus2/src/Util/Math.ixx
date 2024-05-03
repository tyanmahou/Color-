﻿export module ColorPlus2:Math;
import <algorithm>;
import <cmath>;

export namespace cp2
{
	class Math
	{
	public:
		static constexpr inline double Min(double x, double y) noexcept
		{
			return std::min(x, y);
		}
		static constexpr inline double Max(double x, double y) noexcept
		{
			return std::max(x, y);
		}
		static constexpr inline double Min(double x, double y, double z) noexcept
		{
			return std::min(x, std::min(y, z));
		}
		static constexpr inline double Max(double x, double y, double z) noexcept
		{
			return std::max(x, std::max(y, z));
		}
		static constexpr inline double Clamp(double x, double min, double max)
		{
			return std::clamp(x, min, max);
		}
		static constexpr inline double Saturate(double x)
		{
			return Clamp(x, 0.0, 1.0);
		}

		// TODO: C++26でconstexpr対応
		static constexpr inline double Sqrt(auto x) noexcept
		{
			return std::sqrt(x);
		}
		// TODO: C++26でconstexpr対応
		static constexpr inline double Pow(auto x, auto y) noexcept
		{
			return std::pow(x, y);
		}
		// TODO: C++26でconstexpr対応
		static constexpr inline double Cbrt(auto x) noexcept
		{
			return std::cbrt(x);
		}
		// TODO: C++26でconstexpr対応
		static constexpr inline double Sin(auto x) noexcept
		{
			return std::sin(x);
		}
		// TODO: C++26でconstexpr対応
		static constexpr inline double Cos(auto x) noexcept
		{
			return std::cos(x);
		}
		// TODO: C++26でconstexpr対応
		static constexpr inline double Atan2(auto y, auto x) noexcept
		{
			return std::atan2(y, x);
		}

		// TODO: C++23でconstexpr対応
		static constexpr inline double Repeat(auto x, auto y) noexcept
		{
			return std::fmod(std::fmod(x, y) + y, y);
		}

		static constexpr inline double RepeatHue360(double h) noexcept
		{
			return Repeat(h, 360.0);
		}
	};
}