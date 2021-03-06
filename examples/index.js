/**
* @license Apache-2.0
*
* Copyright (c) 2018 The Stdlib Authors.
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

'use strict';

var floor = require( '@stdlib/math-base-special-floor' );
var randu = require( '@stdlib/random-base-randu' );
var pow = require( '@stdlib/math-base-special-pow' );
var getLowWord = require( './../lib' );

var frac;
var exp;
var w;
var x;
var i;

for ( i = 0; i < 100; i++ ) {
	frac = randu() * 10.0;
	exp = -floor( randu()*324.0 );
	x = frac * pow( 10.0, exp );
	w = getLowWord( x );
	console.log( 'x: %d. low word: %d.', x, w );
}
