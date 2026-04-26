#include <windows.h>
#include <iostream>

int main() {
    // set the thread state
    EXECUTION_STATE state = ES_CONTINUOUS | ES_SYSTEM_REQUIRED | ES_DISPLAY_REQUIRED;
    if (SetThreadExecutionState(state) == NULL) {
        std::cerr << "Failed to set execution state. Error: " << GetLastError() << std::endl;
        return 1;
    }

    std::cout << "Keeping windows awake. The computer will not sleep while this window is open." << std::endl;
    std::cout << "Press Enter to exit and allow sleep again..." << std::endl;

    std::cin.get();

    // reset the state back to normal before exiting
    SetThreadExecutionState(ES_CONTINUOUS);

    return 0;
}
