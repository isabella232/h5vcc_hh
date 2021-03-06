/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSHTMLFieldSetElement.h"

#include "HTMLFieldSetElement.h"
#include "HTMLFormElement.h"
#include "JSHTMLFormElement.h"
#include "JSValidityState.h"
#include "KURL.h"
#include "ValidityState.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLFieldSetElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLFieldSetElementTableValues[6] =
{
    { "form", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFieldSetElementForm), (intptr_t)0 THUNK_GENERATOR(0) },
    { "validity", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFieldSetElementValidity), (intptr_t)0 THUNK_GENERATOR(0) },
    { "willValidate", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFieldSetElementWillValidate), (intptr_t)0 THUNK_GENERATOR(0) },
    { "validationMessage", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFieldSetElementValidationMessage), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFieldSetElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLFieldSetElementTable = { 16, 15, JSHTMLFieldSetElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLFieldSetElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLFieldSetElementConstructorTable = { 1, 0, JSHTMLFieldSetElementConstructorTableValues, 0 };
class JSHTMLFieldSetElementConstructor : public DOMConstructorObject {
public:
    JSHTMLFieldSetElementConstructor(JSC::ExecState*, JSDOMGlobalObject*);

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSHTMLFieldSetElementConstructor::s_info = { "HTMLFieldSetElementConstructor", 0, &JSHTMLFieldSetElementConstructorTable, 0 };

JSHTMLFieldSetElementConstructor::JSHTMLFieldSetElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSHTMLFieldSetElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSHTMLFieldSetElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLFieldSetElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLFieldSetElementConstructor, DOMObject>(exec, &JSHTMLFieldSetElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLFieldSetElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLFieldSetElementConstructor, DOMObject>(exec, &JSHTMLFieldSetElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLFieldSetElementPrototypeTableValues[3] =
{
    { "checkValidity", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHTMLFieldSetElementPrototypeFunctionCheckValidity), (intptr_t)0 THUNK_GENERATOR(0) },
    { "setCustomValidity", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHTMLFieldSetElementPrototypeFunctionSetCustomValidity), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLFieldSetElementPrototypeTable = { 4, 3, JSHTMLFieldSetElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLFieldSetElementPrototype::s_info = { "HTMLFieldSetElementPrototype", 0, &JSHTMLFieldSetElementPrototypeTable, 0 };

JSObject* JSHTMLFieldSetElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLFieldSetElement>(exec, globalObject);
}

bool JSHTMLFieldSetElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSHTMLFieldSetElementPrototypeTable, this, propertyName, slot);
}

bool JSHTMLFieldSetElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSHTMLFieldSetElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSHTMLFieldSetElement::s_info = { "HTMLFieldSetElement", &JSHTMLElement::s_info, &JSHTMLFieldSetElementTable, 0 };

JSHTMLFieldSetElement::JSHTMLFieldSetElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLFieldSetElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

JSObject* JSHTMLFieldSetElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLFieldSetElementPrototype(globalObject, JSHTMLFieldSetElementPrototype::createStructure(JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLFieldSetElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLFieldSetElement, Base>(exec, &JSHTMLFieldSetElementTable, this, propertyName, slot);
}

bool JSHTMLFieldSetElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLFieldSetElement, Base>(exec, &JSHTMLFieldSetElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLFieldSetElementForm(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLFieldSetElement* castedThis = static_cast<JSHTMLFieldSetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFieldSetElement* imp = static_cast<HTMLFieldSetElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->form()));
    return result;
}

JSValue jsHTMLFieldSetElementValidity(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLFieldSetElement* castedThis = static_cast<JSHTMLFieldSetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFieldSetElement* imp = static_cast<HTMLFieldSetElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->validity()));
    return result;
}

JSValue jsHTMLFieldSetElementWillValidate(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLFieldSetElement* castedThis = static_cast<JSHTMLFieldSetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFieldSetElement* imp = static_cast<HTMLFieldSetElement*>(castedThis->impl());
    JSValue result = jsBoolean(imp->willValidate());
    return result;
}

JSValue jsHTMLFieldSetElementValidationMessage(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLFieldSetElement* castedThis = static_cast<JSHTMLFieldSetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFieldSetElement* imp = static_cast<HTMLFieldSetElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->validationMessage());
    return result;
}

JSValue jsHTMLFieldSetElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLFieldSetElement* domObject = static_cast<JSHTMLFieldSetElement*>(asObject(slotBase));
    return JSHTMLFieldSetElement::getConstructor(exec, domObject->globalObject());
}
JSValue JSHTMLFieldSetElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLFieldSetElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsHTMLFieldSetElementPrototypeFunctionCheckValidity(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLFieldSetElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLFieldSetElement* castedThis = static_cast<JSHTMLFieldSetElement*>(asObject(thisValue));
    HTMLFieldSetElement* imp = static_cast<HTMLFieldSetElement*>(castedThis->impl());


    JSC::JSValue result = jsBoolean(imp->checkValidity());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsHTMLFieldSetElementPrototypeFunctionSetCustomValidity(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLFieldSetElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLFieldSetElement* castedThis = static_cast<JSHTMLFieldSetElement*>(asObject(thisValue));
    HTMLFieldSetElement* imp = static_cast<HTMLFieldSetElement*>(castedThis->impl());
    const String& error = valueToStringWithUndefinedOrNullCheck(exec, exec->argument(0));

    imp->setCustomValidity(error);
    return JSValue::encode(jsUndefined());
}


}
