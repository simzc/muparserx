	/*
				__________                                 ____  ___
	_____  __ _\______   \_____ _______  ______ __________\   \/  /
	/     \|  |  \     ___/\__  \\_  __ \/  ___// __ \_  __ \     /
	|  Y Y  \  |  /    |     / __ \|  | \/\___ \\  ___/|  | \/     \
	|__|_|  /____/|____|    (____  /__|  /____  >\___  >__| /___/\  \
			\/                     \/           \/     \/           \_/
	Copyright (C) 2023, Ingo Berg, et al.
	All rights reserved.

	Redistribution and use in source and binary forms, with or without
	modification, are permitted provided that the following conditions are met:

	* Redistributions of source code must retain the above copyright notice,
	this list of conditions and the following disclaimer.
	* Redistributions in binary form must reproduce the above copyright notice,
	this list of conditions and the following disclaimer in the documentation
	and/or other materials provided with the distribution.

	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
	ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
	WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
	IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
	INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
	NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
	PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
	WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
	ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
	POSSIBILITY OF SUCH DAMAGE.
	*/
#ifndef MP_SC_OPRT_BIN_H
#define MP_SC_OPRT_BIN_H

/** \file
\brief Definitions of classes used as callbacks for standard binary operators.
*/

/** \defgroup binop Binary operator callbacks

This group lists the objects representing the binary operators of muParserX.
*/

#include <cmath>
#include "mpIOprtBinShortcut.h"
#include "mpValue.h"
#include "mpError.h"


MUP_NAMESPACE_START

//------------------------------------------------------------------------------
/** \brief Callback class for a logical or operator. begin
	\ingroup binop
*/
class MUP_EXPORT OprtShortcutLogicOrBegin : public IOprtBinShortcut
{
public:
	OprtShortcutLogicOrBegin(const char_type* szIdent = _T("||"));
	virtual IToken* Clone() const override;
};


//------------------------------------------------------------------------------
/** \brief Callback class for a logical or operator. end
	\ingroup binop
*/
class MUP_EXPORT OprtShortcutLogicOrEnd : public IOprtBinShortcut
{
public:
	OprtShortcutLogicOrEnd(const char_type* szIdent = _T("||"));
	virtual IToken* Clone() const override;
};


//------------------------------------------------------------------------------
/** \brief Callback class for a logical and operator. begin
	\ingroup binop
	*/
class MUP_EXPORT OprtShortcutLogicAndBegin : public IOprtBinShortcut
{
public:
	OprtShortcutLogicAndBegin(const char_type* szIdent = _T("&&"));
	virtual IToken* Clone() const override;
};

//------------------------------------------------------------------------------
/** \brief Callback class for a logical and operator. begin
	\ingroup binop
	*/
class MUP_EXPORT OprtShortcutLogicAndEnd : public IOprtBinShortcut
{
public:
	OprtShortcutLogicAndEnd(const char_type* szIdent = _T("&&"));
	virtual IToken* Clone() const override;
};

}  // namespace mu

#endif
