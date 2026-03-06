#pragma once

#include "h/general.hpp"
#include "cpu/vminstphsr.hpp"
#include "cpu/vminstprefix.hpp"
#include "cpu/vmreg.hpp"
#include "cpu/vmflag.hpp"

class Inst {
public:

	void nop();
	void mov( GPR &dstreg, GPR &srcreg );
	void entr();
	void leav();
	void lea( GPR &dstreg, GPR &srcreg, dispb offset );
	void leasc( GPR &dstreg, GPR &srcreg, factor factor, GPR &srcreg2, dispb offset );
	void brk();
	void cmp( GPR &dstreg, GPR &srcreg );
	void jmp( dispw offset );
	void jmpr( GPR &dstreg );
	void callr( GPR &dstreg );
	void intp( byte imm ); // the original instruction is 'int'(interrupt), but it's a keyword in C++
	void iret();
	void in( port port );
	void out( port port );
	void syscall();

	void ld( GPR &dstreg, GPR &srcreg, dispb offset );
	void st( GPR &dstreg, GPR &srcreg, dispb offset );

	void jz( dispw offset );
	void jc( dispw offset );
	void jo( dispw offset );
	void jn( dispw offset );
	void jnz( dispw offset );
	void jnc( dispw offset );
	void jno( dispw offset );
	void jnn( dispw offset );
	void jl( dispw offset );
	void jge( dispw offset );
	void ja( dispw offset );
	void jbe( dispw offset );
	void jle( dispw offset );
	void jag( dispw offset );
	void call( addrw addr ); // a WORD ptr call, not DWORD ptr call.
	void ret();

	void movz( GPR &dstreg, GPR &srcreg );
	void movc( GPR &dstreg, GPR &srcreg );
	void movo( GPR &dstreg, GPR &srcreg );
	void movn( GPR &dstreg, GPR &srcreg );
	void movnz( GPR &dstreg, GPR &srcreg );
	void movnc( GPR &dstreg, GPR &srcreg );
	void movno( GPR &dstreg, GPR &srcreg );
	void movnn( GPR &dstreg, GPR &srcreg );
	void movl( GPR &dstreg, GPR &srcreg );
	void movge( GPR &dstreg, GPR &srcreg );
	void mova( GPR &dstreg, GPR &srcreg );
	void movbe( GPR &dstreg, GPR &srcreg );
	void movle( GPR &dstreg, GPR &srcreg );
	void movag( GPR &dstreg, GPR &srcreg );
	void jmpfar( addr addr ); // a DWORD ptr jmp.

	void pushimmdw( dword imm );
	void push_ra();
	void push_rb();
	void push_rc();
	void push_rd();
	void push_ri();
	void push_bp();
	void addsp( immb imm ); // unsigned immediate there.
	/* this is OP 0x48 series */
	void pop_ra();
	void pop_rb();
	void pop_rc();
	void pop_rd();
	void pop_ri();
	void pop_bp();
	void subsp( immb imm ); // unsigned immediate there.

	/* this is OP 0x50 series */
	void xori( GPR &dstreg, GPR &srcreg, immb imm );
	void andi( GPR &dstreg, GPR &srcreg, immb imm );
	void ori( GPR &dstreg, GPR &srcreg, immb imm );
	void notl( GPR &dstreg, GPR &srcreg ); // the original instruction is 'not'(bitwise logical not), but it's a keyword in C++
	void xnori( GPR &dstreg, GPR &srcreg, immb imm );
	void nandi( GPR &dstreg, GPR &srcreg, immb imm );
	void nori( GPR &dstreg, GPR &srcreg, immb imm );
	void shl( GPR &dstreg, GPR &srcreg, immb imm );
	void shr( GPR &dstreg, GPR &srcreg, immb imm );
	void clr_ra();
	void copyip();
	void xchg( GPR &dstreg, GPR &srcreg );
	void sar( GPR &dstreg, GPR &srcreg, immb imm );
	void rol( GPR &dstreg, GPR &srcreg, immb imm );
	void ror( GPR &dstreg, GPR &srcreg, immb imm );

	void mul( GPR &dstreg, GPR &srcreg, GPR &srcreg2, GPR &srcreg3 ); // this is a rare 4-operand operation.
	void div( GPR &dstreg, GPR &srcreg, GPR &srcreg2, GPR &srcreg3 ); // this is a rare 4-operand operation.
	void addib( GPR &dstreg, GPR &srcreg, immb imm );
	void smul( GPR &dstreg, GPR &srcreg, GPR &srcreg2, GPR &srcreg3 ); // same as mul, but signed.
	void sdiv( GPR &dstreg, GPR &srcreg, GPR &srcreg2, GPR &srcreg3 ); // same as div, but signed.
	void subib( GPR &dstreg, GPR &srcreg, immb imm );
	void random();
	void inc( GPR &dstreg, GPR &srcreg ); // it's 2-operand type, not only one operand!
	void neg( GPR &dstreg, GPR &srcreg ); // it's 2-operand type, not only one operand!
	void dec( GPR &dstreg, GPR &srcreg ); // it's 2-operand type, not only one operand!


	

	sdword distrubite();
};