/*
 * Copyright (c) 2015 Igalia
 * Copyright (c) 2015 Igalia S.L.
 * Copyright (c) 2015 Igalia.
 * Copyright (c) 2015, 2016 Canon Inc. All rights reserved.
 * Copyright (c) 2015, 2016, 2017 Canon Inc.
 * Copyright (c) 2016, 2020 Apple Inc. All rights reserved.
 * Copyright (c) 2023 Codeblog Corp. All rights reserved.
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
 * 
 */

// DO NOT EDIT THIS FILE. It is automatically generated from JavaScript files for
// builtins by the script: Source/JavaScriptCore/Scripts/generate-js-builtins.py

#include "config.h"
#include "WritableStreamDefaultWriterBuiltins.h"

#include "WebCoreJSClientData.h"
#include <JavaScriptCore/IdentifierInlines.h>
#include <JavaScriptCore/ImplementationVisibility.h>
#include <JavaScriptCore/Intrinsic.h>
#include <JavaScriptCore/JSObjectInlines.h>
#include <JavaScriptCore/VM.h>

namespace WebCore {

const JSC::ConstructAbility s_writableStreamDefaultWriterInitializeWritableStreamDefaultWriterCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_writableStreamDefaultWriterInitializeWritableStreamDefaultWriterCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_writableStreamDefaultWriterInitializeWritableStreamDefaultWriterCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_writableStreamDefaultWriterInitializeWritableStreamDefaultWriterCodeLength = 376;
static const JSC::Intrinsic s_writableStreamDefaultWriterInitializeWritableStreamDefaultWriterCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_writableStreamDefaultWriterInitializeWritableStreamDefaultWriterCode =
    "(function (stream)\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    //\n" \
    "    //\n" \
    "    const internalStream = @getInternalWritableStream(stream);\n" \
    "    if (internalStream)\n" \
    "        stream = internalStream;\n" \
    "\n" \
    "    if (!@isWritableStream(stream))\n" \
    "        @throwTypeError(\"WritableStreamDefaultWriter constructor takes a WritableStream\");\n" \
    "\n" \
    "    @setUpWritableStreamDefaultWriter(this, stream);\n" \
    "    return this;\n" \
    "})\n" \
;

const JSC::ConstructAbility s_writableStreamDefaultWriterClosedCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_writableStreamDefaultWriterClosedCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_writableStreamDefaultWriterClosedCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_writableStreamDefaultWriterClosedCodeLength = 247;
static const JSC::Intrinsic s_writableStreamDefaultWriterClosedCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_writableStreamDefaultWriterClosedCode =
    "(function ()\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    if (!@isWritableStreamDefaultWriter(this))\n" \
    "        return @Promise.@reject(@makeGetterTypeError(\"WritableStreamDefaultWriter\", \"closed\"));\n" \
    "\n" \
    "    return @getByIdDirectPrivate(this, \"closedPromise\").@promise;\n" \
    "})\n" \
;

const JSC::ConstructAbility s_writableStreamDefaultWriterDesiredSizeCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_writableStreamDefaultWriterDesiredSizeCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_writableStreamDefaultWriterDesiredSizeCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_writableStreamDefaultWriterDesiredSizeCodeLength = 359;
static const JSC::Intrinsic s_writableStreamDefaultWriterDesiredSizeCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_writableStreamDefaultWriterDesiredSizeCode =
    "(function ()\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    if (!@isWritableStreamDefaultWriter(this))\n" \
    "        throw @makeThisTypeError(\"WritableStreamDefaultWriter\", \"desiredSize\");\n" \
    "\n" \
    "    if (@getByIdDirectPrivate(this, \"stream\") === @undefined)\n" \
    "        @throwTypeError(\"WritableStreamDefaultWriter has no stream\");\n" \
    "\n" \
    "    return @writableStreamDefaultWriterGetDesiredSize(this);\n" \
    "})\n" \
;

const JSC::ConstructAbility s_writableStreamDefaultWriterReadyCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_writableStreamDefaultWriterReadyCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_writableStreamDefaultWriterReadyCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_writableStreamDefaultWriterReadyCodeLength = 243;
static const JSC::Intrinsic s_writableStreamDefaultWriterReadyCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_writableStreamDefaultWriterReadyCode =
    "(function ()\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    if (!@isWritableStreamDefaultWriter(this))\n" \
    "        return @Promise.@reject(@makeThisTypeError(\"WritableStreamDefaultWriter\", \"ready\"));\n" \
    "\n" \
    "    return @getByIdDirectPrivate(this, \"readyPromise\").@promise;\n" \
    "})\n" \
;

const JSC::ConstructAbility s_writableStreamDefaultWriterAbortCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_writableStreamDefaultWriterAbortCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_writableStreamDefaultWriterAbortCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_writableStreamDefaultWriterAbortCodeLength = 401;
static const JSC::Intrinsic s_writableStreamDefaultWriterAbortCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_writableStreamDefaultWriterAbortCode =
    "(function (reason)\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    if (!@isWritableStreamDefaultWriter(this))\n" \
    "        return @Promise.@reject(@makeThisTypeError(\"WritableStreamDefaultWriter\", \"abort\"));\n" \
    "\n" \
    "    if (@getByIdDirectPrivate(this, \"stream\") === @undefined)\n" \
    "        return @Promise.@reject(@makeTypeError(\"WritableStreamDefaultWriter has no stream\"));\n" \
    "\n" \
    "    return @writableStreamDefaultWriterAbort(this, reason);\n" \
    "})\n" \
;

const JSC::ConstructAbility s_writableStreamDefaultWriterCloseCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_writableStreamDefaultWriterCloseCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_writableStreamDefaultWriterCloseCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_writableStreamDefaultWriterCloseCodeLength = 569;
static const JSC::Intrinsic s_writableStreamDefaultWriterCloseCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_writableStreamDefaultWriterCloseCode =
    "(function ()\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    if (!@isWritableStreamDefaultWriter(this))\n" \
    "        return @Promise.@reject(@makeThisTypeError(\"WritableStreamDefaultWriter\", \"close\"));\n" \
    "\n" \
    "    const stream = @getByIdDirectPrivate(this, \"stream\");\n" \
    "    if (stream === @undefined)\n" \
    "        return @Promise.@reject(@makeTypeError(\"WritableStreamDefaultWriter has no stream\"));\n" \
    "\n" \
    "    if (@writableStreamCloseQueuedOrInFlight(stream))\n" \
    "        return @Promise.@reject(@makeTypeError(\"WritableStreamDefaultWriter is being closed\"));\n" \
    "    \n" \
    "    return @writableStreamDefaultWriterClose(this);\n" \
    "})\n" \
;

const JSC::ConstructAbility s_writableStreamDefaultWriterReleaseLockCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_writableStreamDefaultWriterReleaseLockCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_writableStreamDefaultWriterReleaseLockCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_writableStreamDefaultWriterReleaseLockCodeLength = 387;
static const JSC::Intrinsic s_writableStreamDefaultWriterReleaseLockCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_writableStreamDefaultWriterReleaseLockCode =
    "(function ()\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    if (!@isWritableStreamDefaultWriter(this))\n" \
    "        throw @makeThisTypeError(\"WritableStreamDefaultWriter\", \"releaseLock\");\n" \
    "\n" \
    "    const stream = @getByIdDirectPrivate(this, \"stream\");\n" \
    "    if (stream === @undefined)\n" \
    "        return;\n" \
    "\n" \
    "    @assert(@getByIdDirectPrivate(stream, \"writer\") !== @undefined);\n" \
    "    @writableStreamDefaultWriterRelease(this);\n" \
    "})\n" \
;

const JSC::ConstructAbility s_writableStreamDefaultWriterWriteCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_writableStreamDefaultWriterWriteCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_writableStreamDefaultWriterWriteCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_writableStreamDefaultWriterWriteCodeLength = 399;
static const JSC::Intrinsic s_writableStreamDefaultWriterWriteCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_writableStreamDefaultWriterWriteCode =
    "(function (chunk)\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    if (!@isWritableStreamDefaultWriter(this))\n" \
    "        return @Promise.@reject(@makeThisTypeError(\"WritableStreamDefaultWriter\", \"write\"));\n" \
    "\n" \
    "    if (@getByIdDirectPrivate(this, \"stream\") === @undefined)\n" \
    "        return @Promise.@reject(@makeTypeError(\"WritableStreamDefaultWriter has no stream\"));\n" \
    "\n" \
    "    return @writableStreamDefaultWriterWrite(this, chunk);\n" \
    "})\n" \
;


#define DEFINE_BUILTIN_GENERATOR(codeName, functionName, overriddenName, argumentCount) \
JSC::FunctionExecutable* codeName##Generator(JSC::VM& vm) \
{\
    JSVMClientData* clientData = static_cast<JSVMClientData*>(vm.clientData); \
    return clientData->builtinFunctions().writableStreamDefaultWriterBuiltins().codeName##Executable()->link(vm, nullptr, clientData->builtinFunctions().writableStreamDefaultWriterBuiltins().codeName##Source(), std::nullopt, s_##codeName##Intrinsic); \
}
WEBCORE_FOREACH_WRITABLESTREAMDEFAULTWRITER_BUILTIN_CODE(DEFINE_BUILTIN_GENERATOR)
#undef DEFINE_BUILTIN_GENERATOR


} // namespace WebCore
