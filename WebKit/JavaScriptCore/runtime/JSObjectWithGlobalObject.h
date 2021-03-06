/*
 * Copyright (C) 2010 Apple Inc. All rights reserved.
 * Copyright (C) 2014 FactorY Media Production GmbH
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef JSObjectWithGlobalObject_h
#define JSObjectWithGlobalObject_h

#include "WebKit_PRX_Defines.h" // FYWEBKITMOD

#include "JSObject.h"

namespace JSC {

class JSGlobalObject;

class FYMP_PRXSYM_WEBKIT JSObjectWithGlobalObject : public JSObject { // FYWEBKITMOD exported symbol
public:
    static PassRefPtr<Structure> createStructure(JSValue proto)
    {
        return Structure::create(proto, TypeInfo(ObjectType, StructureFlags), AnonymousSlotCount);
    }

    JSGlobalObject* globalObject() const;

protected:
    JSObjectWithGlobalObject(JSGlobalObject*, NonNullPassRefPtr<Structure>);

    JSObjectWithGlobalObject(NonNullPassRefPtr<Structure> structure)
        : JSObject(structure)
    {
        // Should only be used by JSFunction when we aquire the JSFunction vptr.
    }
    static const unsigned AnonymousSlotCount = JSObject::AnonymousSlotCount + 1;
    static const unsigned GlobalObjectSlot = 0;
};

} // namespace JSC

#endif // JSObjectWithGlobalObject_h
