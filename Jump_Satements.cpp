#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;

// --------- break ----------
void demo_break_in_loop() {
    cout << "[break] in a loop: stop when i == 5\n";
    for (int i = 0; i < 10; ++i) {
        if (i == 5) {
            cout << "  i == 5 -> break\n";
            break; // exits the for-loop entirely
        }
        cout << "  i = " << i << "\n";
    }
}

void demo_break_in_switch(int day) {
    cout << "\n[break] in a switch (day=" << day << ")\n";
    switch (day) {
        case 1:
            cout << "  Monday\n";
            break; // prevents fall-through
        case 2:
            cout << "  Tuesday\n";
            break;
        case 3:
            cout << "  Wednesday\n";
            break;
        default:
            cout << "  Other day\n";
            break;
    }
}

// --------- continue ----------
void demo_continue() {
    cout << "\n[continue] in a loop: print only odd numbers 1..10\n";
    for (int i = 1; i <= 10; ++i) {
        if (i % 2 == 0) {
            continue; // skip even numbers; jump to next iteration
        }
        cout << "  odd: " << i << "\n";
    }
}

// --------- goto ----------
void demo_goto_break_out_of_nested_loops() {
    cout << "\n[goto] break out of two nested loops when product == 12\n";
    int stopAt = 12;
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            int prod = i * j;
            cout << "  i=" << i << " j=" << j << " prod=" << prod << "\n";
            if (prod == stopAt) {
                cout << "  found prod == " << stopAt << " -> goto done\n";
                goto done; // jump to the label below (same function)
            }
        }
    }
done:
    cout << "  exited both loops via goto\n";
}

// (Another typical—though still rare—use: error cleanup paths)
bool allocate_then_fail_demo() {
    cout << "\n[goto] error handling/cleanup demo\n";
    bool step1_ok = true;
    bool step2_ok = false; // pretend step 2 fails

    // resource #1
    cout << "  step1: acquired resource A\n";
    if (!step1_ok) goto cleanup;

    // resource #2
    cout << "  step2: acquired resource B (but something goes wrong)\n";
    if (!step2_ok) goto cleanup;

    cout << "  all good\n";
    // fallthrough to success
    return true;

cleanup:
    cout << "  cleanup: releasing resources (if any)\n";
    return false;
}

// --------- return ----------
int find_first_negative_index(const std::vector<int>& v) {
    // returns the index of the first negative number; -1 if none
    for (size_t i = 0; i < v.size(); ++i) {
        if (v[i] < 0) {
            return static_cast<int>(i); // early return with a value
        }
    }
    return -1; // no negatives found
}

void demo_return() {
    cout << "\n[return] from function with a value\n";
    std::vector<int> data = {3, 2, 1, -7, 5};
    int idx = find_first_negative_index(data);
    if (idx >= 0) {
        cout << "  first negative at index " << idx
             << " (value=" << data[static_cast<size_t>(idx)] << ")\n";
    } else {
        cout << "  no negatives found\n";
    }

    cout << "\n[return] early-exit pattern\n";
    auto safe_div = [](int a, int b) -> double {
        if (b == 0) {
            // immediate exit on invalid input
            return 0.0; // (in real code, consider std::optional or error handling)
        }
        return static_cast<double>(a) / b;
    };
    cout << "  10/2 = " << safe_div(10, 2) << "\n";
    cout << "  10/0 = " << safe_div(10, 0) << " (early return on invalid input)\n";
}

// --------- main ----------
int main() {
    cout << "=== Jump Statements in C++: Complete Demo ===\n\n";

    demo_break_in_loop();
    demo_break_in_switch(2);
    demo_continue();
    demo_goto_break_out_of_nested_loops();
    bool ok = allocate_then_fail_demo();
    cout << "  result: " << (ok ? "success" : "failure") << "\n";
    demo_return();

    cout << "\n--- Summary Table ---\n";
    cout << "Statement | Purpose                          | Scope           | Destination\n";
    cout << "--------- | -------------------------------- | --------------- | -------------------------------\n";
    cout << "break    | Exit loop/switch                  | Loop/Switch     | Next stmt after loop/switch\n";
    cout << "continue | Skip rest of current iteration    | Loop only       | Next iteration check/update\n";
    cout << "goto     | Unconditional jump to a label     | Same function   | Labeled statement\n";
    cout << "return   | Exit function (optionally value)  | Function only   | Caller\n";

    cout << "\n=== End ===\n";
    return 0;
}
