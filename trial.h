// trial.h

#ifndef TRIAL_INCLUDE_TRIAL_H_
#define TRIAL_INCLUDE_TRIAL_H_


#include <stdlib.h>



run_tests() {
    Global test environment set-up.
    suite_1()...
        setup()...
          case_1()...
        teardown()...
        setup()...
          case_2()...
        teardown()...
    suite_2()...
        setup()...
          case_1()...
        teardown()...
    ...
    Global test environment tear-down
}



int test_cases(*p) {
    for case in cases {
        SETUP(p->setup_func);
        TEST_CASE(p->case_func);
        TEARDOWN(p->teardown_func);
    }
}

int test_suites() {
    for suite in suites {
        test_cases(&suite);
    }
}

int test_runner() {
    global_setup();
    test_suites();
    global_teardown();
}

int main() {
    return test_runner();
}

#endif // TRIAL_INCLUDE_TRIAL_H_