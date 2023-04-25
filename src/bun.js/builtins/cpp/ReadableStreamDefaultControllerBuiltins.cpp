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
#include "ReadableStreamDefaultControllerBuiltins.h"

#include "WebCoreJSClientData.h"
#include <JavaScriptCore/IdentifierInlines.h>
#include <JavaScriptCore/ImplementationVisibility.h>
#include <JavaScriptCore/Intrinsic.h>
#include <JavaScriptCore/JSObjectInlines.h>
#include <JavaScriptCore/VM.h>

namespace WebCore {

const JSC::ConstructAbility s_readableStreamDefaultControllerInitializeReadableStreamDefaultControllerCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_readableStreamDefaultControllerInitializeReadableStreamDefaultControllerCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_readableStreamDefaultControllerInitializeReadableStreamDefaultControllerCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_readableStreamDefaultControllerInitializeReadableStreamDefaultControllerCodeLength = 376;
static const JSC::Intrinsic s_readableStreamDefaultControllerInitializeReadableStreamDefaultControllerCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_readableStreamDefaultControllerInitializeReadableStreamDefaultControllerCode =
    "(function (stream, underlyingSource, size, highWaterMark)\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    if (arguments.length !== 5 && arguments[4] !== @isReadableStream)\n" \
    "        @throwTypeError(\"ReadableStreamDefaultController constructor should not be called directly\");\n" \
    "\n" \
    "    return @privateInitializeReadableStreamDefaultController.@call(this, stream, underlyingSource, size, highWaterMark);\n" \
    "})\n" \
;

const JSC::ConstructAbility s_readableStreamDefaultControllerEnqueueCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_readableStreamDefaultControllerEnqueueCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_readableStreamDefaultControllerEnqueueCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_readableStreamDefaultControllerEnqueueCodeLength = 412;
static const JSC::Intrinsic s_readableStreamDefaultControllerEnqueueCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_readableStreamDefaultControllerEnqueueCode =
    "(function (chunk)\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    if (!@isReadableStreamDefaultController(this))\n" \
    "        throw @makeThisTypeError(\"ReadableStreamDefaultController\", \"enqueue\");\n" \
    "\n" \
    "    if (!@readableStreamDefaultControllerCanCloseOrEnqueue(this))\n" \
    "        @throwTypeError(\"ReadableStreamDefaultController is not in a state where chunk can be enqueued\");\n" \
    "\n" \
    "    return @readableStreamDefaultControllerEnqueue(this, chunk);\n" \
    "})\n" \
;

const JSC::ConstructAbility s_readableStreamDefaultControllerErrorCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_readableStreamDefaultControllerErrorCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_readableStreamDefaultControllerErrorCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_readableStreamDefaultControllerErrorCodeLength = 228;
static const JSC::Intrinsic s_readableStreamDefaultControllerErrorCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_readableStreamDefaultControllerErrorCode =
    "(function (error)\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    if (!@isReadableStreamDefaultController(this))\n" \
    "        throw @makeThisTypeError(\"ReadableStreamDefaultController\", \"error\");\n" \
    "\n" \
    "    @readableStreamDefaultControllerError(this, error);\n" \
    "})\n" \
;

const JSC::ConstructAbility s_readableStreamDefaultControllerCloseCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_readableStreamDefaultControllerCloseCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_readableStreamDefaultControllerCloseCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_readableStreamDefaultControllerCloseCodeLength = 384;
static const JSC::Intrinsic s_readableStreamDefaultControllerCloseCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_readableStreamDefaultControllerCloseCode =
    "(function ()\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    if (!@isReadableStreamDefaultController(this))\n" \
    "        throw @makeThisTypeError(\"ReadableStreamDefaultController\", \"close\");\n" \
    "\n" \
    "    if (!@readableStreamDefaultControllerCanCloseOrEnqueue(this))\n" \
    "        @throwTypeError(\"ReadableStreamDefaultController is not in a state where it can be closed\");\n" \
    "\n" \
    "    @readableStreamDefaultControllerClose(this);\n" \
    "})\n" \
;

const JSC::ConstructAbility s_readableStreamDefaultControllerDesiredSizeCodeConstructAbility = JSC::ConstructAbility::CannotConstruct;
const JSC::ConstructorKind s_readableStreamDefaultControllerDesiredSizeCodeConstructorKind = JSC::ConstructorKind::None;
const JSC::ImplementationVisibility s_readableStreamDefaultControllerDesiredSizeCodeImplementationVisibility = JSC::ImplementationVisibility::Public;
const int s_readableStreamDefaultControllerDesiredSizeCodeLength = 240;
static const JSC::Intrinsic s_readableStreamDefaultControllerDesiredSizeCodeIntrinsic = JSC::NoIntrinsic;
const char* const s_readableStreamDefaultControllerDesiredSizeCode =
    "(function ()\n" \
    "{\n" \
    "    \"use strict\";\n" \
    "\n" \
    "    if (!@isReadableStreamDefaultController(this))\n" \
    "        throw @makeGetterTypeError(\"ReadableStreamDefaultController\", \"desiredSize\");\n" \
    "\n" \
    "    return @readableStreamDefaultControllerGetDesiredSize(this);\n" \
    "})\n" \
;


#define DEFINE_BUILTIN_GENERATOR(codeName, functionName, overriddenName, argumentCount) \
JSC::FunctionExecutable* codeName##Generator(JSC::VM& vm) \
{\
    JSVMClientData* clientData = static_cast<JSVMClientData*>(vm.clientData); \
    return clientData->builtinFunctions().readableStreamDefaultControllerBuiltins().codeName##Executable()->link(vm, nullptr, clientData->builtinFunctions().readableStreamDefaultControllerBuiltins().codeName##Source(), std::nullopt, s_##codeName##Intrinsic); \
}
WEBCORE_FOREACH_READABLESTREAMDEFAULTCONTROLLER_BUILTIN_CODE(DEFINE_BUILTIN_GENERATOR)
#undef DEFINE_BUILTIN_GENERATOR


} // namespace WebCore
