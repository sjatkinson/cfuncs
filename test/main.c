#include "test.h"
#include "cgreen/cgreen.h"


int main(void)
{
   TestSuite* suite = create_test_suite();
   add_test(suite, atom_test);
   add_test(suite, hash_test);
   return run_test_suite(suite,create_text_reporter());
 }
