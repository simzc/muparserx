#ifndef MUP_I_OPRT_BIN_SHORTCUT_H
#define MUP_I_OPRT_BIN_SHORTCUT_H

/** \file
    \brief Definition of basic types used by muParserX

<pre>
               __________                                 ____  ___
    _____  __ _\______   \_____ _______  ______ __________\   \/  /
   /     \|  |  \     ___/\__  \\_  __ \/  ___// __ \_  __ \     /
  |  Y Y  \  |  /    |     / __ \|  | \/\___ \\  ___/|  | \/     \
  |__|_|  /____/|____|    (____  /__|  /____  >\___  >__| /___/\  \
        \/                     \/           \/     \/           \_/
  Copyright (C) 2023 Ingo Berg, et al.
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

#include "MupApiCE.h"
#include "mpIToken.h"
#include "mpIPrecedence.h"


MUP_NAMESPACE_START

  //---------------------------------------------------------------------------
  /** \brief A class for encapsulation if-then-else tokens. */
  class MUP_EXPORT IOprtBinShortcut : public IToken, public IPrecedence
  {
  public:
      IOprtBinShortcut(ECmdCode eCmd, const char_type *a_szIdent, int nPrec, EOprtAsct m_eAsc);

      void SetOffset(int nOffset);
      int GetOffset() const;

      //---------------------------------------------
      // IToken interface
      //---------------------------------------------

      virtual IToken* Clone() const override;
      virtual string_type AsciiDump() const override;
      virtual IPrecedence* AsIPrecedence() override;

      //---------------------------------------------
      // IPrecedence interface
      //---------------------------------------------

      virtual int GetPri() const override;
      virtual EOprtAsct GetAssociativity() const override;

  private:
      int m_nPrec;
      EOprtAsct m_eAsc;
      int m_nOffset;
  };

MUP_NAMESPACE_END

#endif
