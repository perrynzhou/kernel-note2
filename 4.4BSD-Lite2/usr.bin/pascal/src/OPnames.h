/*-
 * Copyright (c) 1980, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)OPnames.h	8.1 (Berkeley) 6/6/93
 */

#ifndef PC
char	*otext[] = {
	0,
	" NODUMP",
	" BEG",
	" END",
	" CALL",
	" FCALL",
	" FRTN",
	" FSAV",
	" SDUP2",
	" SDUP4",
	" TRA",
	" TRA4",
	" GOTO",
	" LINO",
	" PUSH",
	0,
	" IF",
	" REL2",
	" REL4",
	" REL24",
	" REL42",
	" REL8",
	" RELG",
	" RELT",
	" REL28",
	" REL48",
	" REL82",
	" REL84",
	" AND",
	" OR",
	" NOT",
	" VAS",
	" AS2",
	" AS4",
	" AS24",
	" AS42",
	" AS21",
	" AS41",
	" AS28",
	" AS48",
	" AS8",
	" AS",
	" INX2P2",
	" INX4P2",
	" INX2",
	" INX4",
	" OFF",
	" NIL",
	" ADD2",
	" ADD4",
	" ADD24",
	" ADD42",
	" ADD28",
	" ADD48",
	" ADD82",
	" ADD84",
	" SUB2",
	" SUB4",
	" SUB24",
	" SUB42",
	" SUB28",
	" SUB48",
	" SUB82",
	" SUB84",
	" MUL2",
	" MUL4",
	" MUL24",
	" MUL42",
	" MUL28",
	" MUL48",
	" MUL82",
	" MUL84",
	" ABS2",
	" ABS4",
	" ABS8",
	0,
	" NEG2",
	" NEG4",
	" NEG8",
	0,
	" DIV2",
	" DIV4",
	" DIV24",
	" DIV42",
	" MOD2",
	" MOD4",
	" MOD24",
	" MOD42",
	" ADD8",
	" SUB8",
	" MUL8",
	" DVD8",
	" STOI",
	" STOD",
	" ITOD",
	" ITOS",
	" DVD2",
	" DVD4",
	" DVD24",
	" DVD42",
	" DVD28",
	" DVD48",
	" DVD82",
	" DVD84",
	" RV1",
	" RV14",
	" RV2",
	" RV24",
	" RV4",
	" RV8",
	" RV",
	" LV",
	" LRV1",
	" LRV14",
	" LRV2",
	" LRV24",
	" LRV4",
	" LRV8",
	" LRV",
	" LLV",
	" IND1",
	" IND14",
	" IND2",
	" IND24",
	" IND4",
	" IND8",
	" IND",
	0,
	" CON1",
	" CON14",
	" CON2",
	" CON24",
	" CON4",
	" CON8",
	" CON",
	" LVCON",
	" RANG2",
	" RANG42",
	" RSNG2",
	" RSNG42",
	" RANG4",
	" RANG24",
	" RSNG4",
	" RSNG24",
	" STLIM",
	" LLIMIT",
	" BUFF",
	" HALT",
	" VINX2",
	" VINX24",
	" VINX42",
	" VINX4",
	"*ORD2",
	"*CONG",
	"*CONC",
	"*CONC4",
	"*ABORT",
	"*BPT",
	" PXPBUF",
	" COUNT",
	" CASE1OP",
	" CASE2OP",
	" CASE4OP",
	"*CASEBEG",
	"*CASE1",
	"*CASE2",
	"*CASE4",
	"*CASEEND",
	" ADDT",
	" SUBT",
	" MULT",
	" INCT",
	" CTTOT",
	" CARD",
	" IN",
	" ASRT",
	" FOR1U",
	" FOR2U",
	" FOR4U",
	" FOR1D",
	" FOR2D",
	" FOR4D",
	0,
	0,
	" READE",
	" READ4",
	" READC",
	" READ8",
	" READLN",
	" EOF",
	" EOLN",
	0,
	" WRITEC",
	" WRITES",
	" WRITEF",
	" WRITLN",
	" PAGE",
	" NAM",
	" MAX",
	" MIN",
	" UNIT",
	" UNITINP",
	" UNITOUT",
	" MESSAGE",
	" GET",
	" PUT",
	" FNIL",
	0,
	" DEFNAME",
	" RESET",
	" REWRITE",
	" FILE",
	" REMOVE",
	" FLUSH",
	0,
	0,
	" PACK",
	" UNPACK",
	" NEW",
	" DISPOSE",
	" DFDISP",
	" ARGC",
	" ARGV",
	0,
	" CLCK",
	" WCLCK",
	" SCLCK",
	" DATE",
	" TIME",
	" UNDEF",
	0,
	0,
	" ATAN",
	" COS",
	" EXP",
	" LN",
	" SIN",
	" SQRT",
	" CHR2",
	" CHR4",
	" ODD2",
	" ODD4",
	" PRED2",
	" PRED4",
	" PRED24",
	" SUCC2",
	" SUCC4",
	" SUCC24",
	" SEED",
	" RANDOM",
	" EXPO",
	" SQR2",
	" SQR4",
	" SQR8",
	" ROUND",
	" TRUNC"
};
#endif
