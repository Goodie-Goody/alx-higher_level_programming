#!/usr/bin/python3
def magic_calculation(a, b, c):
    # Compare a and b
    if a < b:
        # Compare c and b
        if c > b:
            # Return c if c > b
            return c
        else:
            # Return the sum of a and b if c <= b
            return a + b
    else:
        # Return the result of a * b - c if a >= b
        return a * b - c
