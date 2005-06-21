;[]-----------------------------------------------------------------[]
;|   COMMON.ASM -- string functions				     |
;[]-----------------------------------------------------------------[]
;
; $Copyright: 2005$
; $Revision: 1.4 $
;
;Fast String standalone methods
;int __fastcall Length() const;
;AnsiString& __fastcall SetLength(int newLength);

	GLOBAL	_mainCRTStartup

	section _TEXT use32 public class=code align=16

..start:
_mainCRTStartup:
	mov	eax, [words]
	mov	eax, 1
	ret	0ch

	section _DATA use32 public class=data align=16

words	dw	0
