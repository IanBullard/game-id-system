/*
 * Copyright (c) 2012 Ian C. Bullard
 * 
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 * 
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

// In order for the orginal code to compile, some things need to be defined
struct Object {
	unsigned id;
	int test;
};

#include <limits.h>
#include <cassert>

#include "gdmag_inner_product_dec11.h"

int main()
{
	System original_system;
	ID test1, test2;

	test1 = original_system.add();
	test2 = original_system.add();

	assert(original_system.has(test1));
	assert(original_system.has(test1));

	Object& t1 = original_system.lookup(test1);
	t1.test = 1;

	Object& t11 = original_system.lookup(test1);
	assert(t11.test == 1);

	original_system.remove(test1);

	assert(!original_system.has(test1));
	assert(original_system.has(test1));

	return 0;
}