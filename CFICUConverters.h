/*
 * Copyright (c) 2011 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */

/*
 *  CFICUConverters.h
 *  CoreFoundation
 *
 *  Created by Aki Inoue on 07/12/04.
 *  Copyright (c) 2007-2011, Apple Inc. All rights reserved.
 *
 */

#include <CoreFoundation/CFString.h>

__private_extern__ const char *__CFStringEncodingGetICUName(CFStringEncoding encoding);

__private_extern__ CFStringEncoding __CFStringEncodingGetFromICUName(const char *icuName);


__private_extern__ CFIndex __CFStringEncodingICUToBytes(const char *icuName, uint32_t flags, const UniChar *characters, CFIndex numChars, CFIndex *usedCharLen, uint8_t *bytes, CFIndex maxByteLen, CFIndex *usedByteLen);
__private_extern__ CFIndex __CFStringEncodingICUToUnicode(const char *icuName, uint32_t flags, const uint8_t *bytes, CFIndex numBytes, CFIndex *usedByteLen, UniChar *characters, CFIndex maxCharLen, CFIndex *usedCharLen);
__private_extern__ CFIndex __CFStringEncodingICUCharLength(const char *icuName, uint32_t flags, const uint8_t *bytes, CFIndex numBytes);
__private_extern__ CFIndex __CFStringEncodingICUByteLength(const char *icuName, uint32_t flags, const UniChar *characters, CFIndex numChars);

// The caller is responsible for freeing the memory (use CFAllocatorDeallocate)
__private_extern__ CFStringEncoding *__CFStringEncodingCreateICUEncodings(CFAllocatorRef allocator, CFIndex *numberOfIndex);


