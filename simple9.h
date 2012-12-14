/*
Copyright 2012 Christopher Hoobin. All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:

1. Redistributions of source code must retain the above copyright
notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above
copyright notice, this list of conditions and the following
disclaimer in the documentation and/or other materials provided
with the distribution.

THIS SOFTWARE IS PROVIDED BY CHRISTOPHER HOOBIN ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL CHRISTOPHER HOOBIN OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

The views and conclusions contained in the software and documentation
are those of the authors and should not be interpreted as representing
official policies, either expressed or implied, of Christopher Hoobin.
*/

#ifndef SIMPLE9_H
#define SIMPLE9_H

#include <stdint.h>
#include <stdio.h>

/* Performs a simple9 encoding of n elements from array. The result is
 * written to the file descriptor.
 *
 * Returns the number of bytes written to the file descriptor. */
size_t simple9_encode(uint32_t *array, size_t n, FILE *fp);

/* Allocates and array of n elements and decodes a simple9
 * encoding. The encoding is read from the file descriptor.
 *
 * Memory for *array is allocated inside the function and n is also
 * set. The caller is responsible for freeing memory.
 *
 * Returns the number of bytes read from the file descriptor. */
size_t simple9_decode(uint32_t **array, size_t *n, FILE *fp);

size_t simple9_decode_unrolled(uint32_t **array, size_t *n, FILE *fp);

#endif /* SIMPLE9_H */
