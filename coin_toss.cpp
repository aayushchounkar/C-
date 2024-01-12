// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// #include <chrono>
// #include <thread>

// int main() {
//     // Seed the random number generator with the current time
//     std::srand(static_cast<unsigned int>(std::time(nullptr)));

//     // Simulate the coin toss with random results
//     int random_result = std::rand() % 2; // 0 for heads, 1 for tails

//     // Output the result
//     std::cout << "Tossing the coin..." << std::endl;

//     // Sleep for 2 seconds (2000 milliseconds)
//     std::this_thread::sleep_for(std::chrono::milliseconds(2000));

//     if (random_result == 0) {
//         std::cout << "It's heads!" << std::endl;
//     } else {
//         std::cout << "It's tails!" << std::endl;
//     }

//     return 0;
// }
