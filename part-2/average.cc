// Tyler Aguilar
// aguilart01@csu.fullerton.edu
// @tyleraguilar
// Partners: @trenchs

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  int list_args{static_cast<int>(arguments.size()) - 1};
  // Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if (list_args < 1) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  // Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.

  double temp{0.0};
  double total{0.0};
  double average{0.0};

  for (std::string const& arg : arguments) {
    if (arg == "./average") {
      // ++i;
      continue;
    }
    temp = std::stod(arg);
    total += temp;
  }

  // After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.
  // int args = static_cast<int>(arguments.size() - 1);
  average = total / list_args;
  // Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.
  std::cout << "average = " << average << "\n";

  return 0;
}
