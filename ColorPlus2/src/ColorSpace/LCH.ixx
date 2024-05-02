﻿export module ColorPlus2:LCH;

export namespace cp2
{
	/// <summary>
	/// LCH色空間
	/// </summary>
	struct LCH
	{
		/// <summary>
		/// 明度 [0, 100]
		/// </summary>
		double l;

		/// <summary>
		/// 彩度
		/// </summary>
		double c;

		/// <summary>
		/// 色相 [0, 360]
		/// </summary>
		double h;

		friend constexpr bool operator==(const LCH& a, const LCH& b) = default;
	};

	/// <summary>
	/// Ok LCH色空間
	/// </summary>
	struct OkLCH
	{
		/// <summary>
		/// 明度 [0, 100]
		/// </summary>
		double l;

		/// <summary>
		/// 彩度
		/// </summary>
		double c;

		/// <summary>
		/// 色相 [0, 360]
		/// </summary>
		double h;

		friend constexpr bool operator==(const OkLCH& a, const OkLCH& b) = default;
	};
}