#pragma once

#include "general.hpp"

class Flag {
public:
	enum TYPE : byte{
		Z, C, O, N,
		FLZ, FLO, FLV,
		IF,
		U0, U1, U2,
		BE, AC,
		U3, U4, U5,
		PROT
	};

	static constexpr dword Z_MASK   = 1 << 0;
	static constexpr dword C_MASK   = 1 << 1;
	static constexpr dword O_MASK   = 1 << 2;
	static constexpr dword N_MASK   = 1 << 3;

	static constexpr dword FLZ_MASK = 1 << 4;
	static constexpr dword FLO_MASK = 1 << 5;
	static constexpr dword FLV_MASK = 1 << 6;

	static constexpr dword IF_MASK  = 1 << 7;

	static constexpr dword U0_MASK  = 1 << 8;
	static constexpr dword U1_MASK  = 1 << 9;
	static constexpr dword U2_MASK  = 1 << 10;

	static constexpr dword BE_MASK  = 1 << 11;
	static constexpr dword AC_MASK  = 1 << 12;

	static constexpr dword U3_MASK  = 1 << 13;
	static constexpr dword U4_MASK  = 1 << 14;
	static constexpr dword U5_MASK  = 1 << 15;

	static constexpr dword PROT_MASK = 1 << 16;

private:
	dword flag;

public:
	Flag() : flag(0) {}

	void set( TYPE flag );
	void clear( TYPE flag );
	bool get( TYPE flag ) const;

};