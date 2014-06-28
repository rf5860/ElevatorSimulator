#include <stdlib.h>
#include <stdio.h>
#include "cutest-1.5/CuTest.h"

void testCuStringNew(CuTest* tc) {
	CuString* str = CuStringNew();
	CuAssertTrue(tc, 0 == str->length);
	CuAssertTrue(tc, 0 != str->size);
	CuAssertStrEquals(tc, "", str->buffer);
}

CuSuite* cuGetSuite() {
	CuSuite* suite = CuSuiteNew();

	SUITE_ADD_TEST(suite, testCuStringNew);

	return suite;
}

int main(int argc, char* argv[]) {
	CuString *output = CuStringNew();
	CuSuite* suite = CuSuiteNew();

	CuSuiteAddSuite(suite, cuGetSuite());

	CuSuiteRun(suite);
	CuSuiteSummary(suite, output);
	CuSuiteDetails(suite, output);
	printf("%s\n", output->buffer);

	return EXIT_SUCCESS;
}
