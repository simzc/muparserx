/** \file
	\brief Definition of functions for complex valued operations.

<pre>
			   __________                                 ____  ___
	_____  __ _\______   \_____ _______  ______ __________\   \/  /
   /     \|  |  \     ___/\__  \\_  __ \/  ___// __ \_  __ \     /
  |  Y Y  \  |  /    |     / __ \|  | \/\___ \\  ___/|  | \/     \
  |__|_|  /____/|____|    (____  /__|  /____  >\___  >__| /___/\  \
		\/                     \/           \/     \/           \_/
									   Copyright (C) 2023 Ingo Berg
									   All rights reserved.

  muParserX - A C++ math parser library with array and string support
  Copyright (C) 2023, Ingo Berg
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
</pre>
*/
#ifndef MUP_COMPLEX_FUNCTIONS_H
#define MUP_COMPLEX_FUNCTIONS_H

#include "mpICallback.h"
#include "MupApiCE.h"

MUP_NAMESPACE_START

//-----------------------------------------------------------------------
/** \brief Parser callback object for returning the real part of a complex number.
	\ingroup functions
*/
class MUP_EXPORT FunCmplxReal : public ICallback
{
public:
	FunCmplxReal();
	virtual ~FunCmplxReal();
	virtual void Eval(ptr_val_type& ret, const ptr_val_type* a_pArg, int a_iArgc) override;
	virtual const char_type* GetDesc() const override;
	virtual IToken* Clone() const override;
};

//-----------------------------------------------------------------------
/** \brief Parser callback object for returning the imaginary part of a complex number.
	\ingroup functions
*/
class MUP_EXPORT FunCmplxImag : public ICallback
{
public:
	FunCmplxImag();
	virtual void Eval(ptr_val_type& ret, const ptr_val_type* a_pArg, int a_iArgc) override;
	virtual const char_type* GetDesc() const override;
	virtual IToken* Clone() const override;
};

//-----------------------------------------------------------------------
/** \brief Parser callback object for returning the complex conjugate of
		   the complex number.
	\ingroup functions
*/
class MUP_EXPORT FunCmplxConj : public ICallback
{
public:
	FunCmplxConj();
	virtual void Eval(ptr_val_type& ret, const ptr_val_type* a_pArg, int a_iArgc) override;
	virtual const char_type* GetDesc() const override;
	virtual IToken* Clone() const override;
};


//-----------------------------------------------------------------------
/** \brief Parser callback object for returning the phase angle
		   (or angular component) of a complex number, expressed in radians.
	\ingroup functions
*/
class MUP_EXPORT FunCmplxArg : public ICallback
{
public:
	FunCmplxArg();
	virtual void Eval(ptr_val_type& ret, const ptr_val_type* a_pArg, int a_iArgc) override;
	virtual const char_type* GetDesc() const override;
	virtual IToken* Clone() const override;
};

//-----------------------------------------------------------------------
/** \brief Parser callback object for returning the norm value of the
		   complex number phase angle.
	\ingroup functions
*/
class MUP_EXPORT FunCmplxNorm : public ICallback
{
public:
	FunCmplxNorm();
	virtual void Eval(ptr_val_type& ret, const ptr_val_type* a_pArg, int a_iArgc) override;
	virtual const char_type* GetDesc() const override;
	virtual IToken* Clone() const override;
};

//-----------------------------------------------------------------------
class MUP_EXPORT FunCmplxCos : public ICallback
{
public:
	FunCmplxCos();
	virtual void Eval(ptr_val_type& ret, const ptr_val_type* a_pArg, int a_iArgc) override;
	virtual const char_type* GetDesc() const override;
	virtual IToken* Clone() const override;
};

//-----------------------------------------------------------------------
class MUP_EXPORT FunCmplxSin : public ICallback
{
public:
	FunCmplxSin();
	virtual void Eval(ptr_val_type& ret, const ptr_val_type* a_pArg, int a_iArgc) override;
	virtual const char_type* GetDesc() const override;
	virtual IToken* Clone() const override;
};

//-----------------------------------------------------------------------
class MUP_EXPORT FunCmplxCosH : public ICallback
{
public:
	FunCmplxCosH();
	virtual void Eval(ptr_val_type& ret, const ptr_val_type* a_pArg, int a_iArgc) override;
	virtual const char_type* GetDesc() const override;
	virtual IToken* Clone() const override;
};

//-----------------------------------------------------------------------
class MUP_EXPORT FunCmplxSinH : public ICallback
{
public:
	FunCmplxSinH();
	virtual void Eval(ptr_val_type& ret, const ptr_val_type* a_pArg, int a_iArgc) override;
	virtual const char_type* GetDesc() const override;
	virtual IToken* Clone() const override;
};

//-----------------------------------------------------------------------
class MUP_EXPORT FunCmplxTan : public ICallback
{
public:
	FunCmplxTan();
	virtual void Eval(ptr_val_type& ret, const ptr_val_type* a_pArg, int a_iArgc) override;
	virtual const char_type* GetDesc() const override;
	virtual IToken* Clone() const override;
};

//-----------------------------------------------------------------------
class MUP_EXPORT FunCmplxTanH : public ICallback
{
public:
	FunCmplxTanH();
	virtual void Eval(ptr_val_type& ret, const ptr_val_type* a_pArg, int a_iArgc) override;
	virtual const char_type* GetDesc() const override;
	virtual IToken* Clone() const override;
};

//-----------------------------------------------------------------------
class MUP_EXPORT FunCmplxSqrt : public ICallback
{
public:
	FunCmplxSqrt();
	virtual void Eval(ptr_val_type& ret, const ptr_val_type* a_pArg, int a_iArgc) override;
	virtual const char_type* GetDesc() const override;
	virtual IToken* Clone() const override;
};


//-----------------------------------------------------------------------
class MUP_EXPORT FunCmplxExp : public ICallback
{
public:
	FunCmplxExp();
	virtual void Eval(ptr_val_type& ret, const ptr_val_type* a_pArg, int a_iArgc) override;
	virtual const char_type* GetDesc() const override;
	virtual IToken* Clone() const override;
};

//-----------------------------------------------------------------------
class MUP_EXPORT FunCmplxLn : public ICallback
{
public:
	FunCmplxLn();
	virtual void Eval(ptr_val_type& ret, const ptr_val_type* a_pArg, int a_iArgc) override;
	virtual const char_type* GetDesc() const override;
	virtual IToken* Clone() const override;
};

//-----------------------------------------------------------------------
class MUP_EXPORT FunCmplxLog : public ICallback
{
public:
	FunCmplxLog();
	virtual void Eval(ptr_val_type& ret, const ptr_val_type* a_pArg, int a_iArgc) override;
	virtual const char_type* GetDesc() const override;
	virtual IToken* Clone() const override;
};

//-----------------------------------------------------------------------
class MUP_EXPORT FunCmplxLog10 : public ICallback
{
public:
	FunCmplxLog10();
	virtual void Eval(ptr_val_type& ret, const ptr_val_type* a_pArg, int a_iArgc) override;
	virtual const char_type* GetDesc() const override;
	virtual IToken* Clone() const override;
};

//-----------------------------------------------------------------------
class MUP_EXPORT FunCmplxLog2 : public ICallback
{
public:
	FunCmplxLog2();
	virtual void Eval(ptr_val_type& ret, const ptr_val_type* a_pArg, int a_iArgc) override;
	virtual const char_type* GetDesc() const override;
	virtual IToken* Clone() const override;
};

//-----------------------------------------------------------------------
class MUP_EXPORT FunCmplxAbs : public ICallback
{
public:

	FunCmplxAbs();
	virtual void Eval(ptr_val_type& ret, const ptr_val_type* a_pArg, int a_iArgc) override;
	virtual const char_type* GetDesc() const override;
	virtual IToken* Clone() const override;
};

//-----------------------------------------------------------------------
class MUP_EXPORT FunCmplxPow : public ICallback
{
public:

	FunCmplxPow();
	virtual void Eval(ptr_val_type& ret, const ptr_val_type* a_pArg, int a_iArgc) override;
	virtual const char_type* GetDesc() const override;
	virtual IToken* Clone() const override;
};

}  // namespace mu

#endif
