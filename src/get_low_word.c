/**
* @license Apache-2.0
*
* Copyright (c) 2020 The Stdlib Authors.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*    http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include "stdlib/number/float64/base/get_low_word.h"
#include "stdlib/number/float64/base/to_words.h"
#include <stdint.h>

/**
* Extracts the unsigned 32-bit integer corresponding to the less significant 32 bits of a double-precision floating-point number.
*
* @param x      input value
* @param low    destination for lower order word
*
* @example
* #include <stdint.h>
*
* uint32_t low;
* stdlib_base_float64_get_low_word( 3.14, &low );
*/
void stdlib_base_float64_get_low_word( const double x, uint32_t *low ) {
	stdlib_base_float64_words_t w;
	w.value = x;
	*low = w.words.low;
}
