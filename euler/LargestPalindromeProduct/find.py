def is_palindrome(num):
    """Check if a number is a palindrome."""
    return str(num) == str(num)[::-1]


def largest_palindrome_product(n):
    """Find the largest palindrome made from the product of two n-digit numbers."""
    max_num = 10**n - 1
    min_num = 10 ** (n - 1)
    largest = 0

    # Start from the largest numbers and work downwards
    for i in range(max_num, min_num - 1, -1):
        # If i*i is already smaller than current largest, we can break
        if i * i < largest:
            break

        for j in range(i, min_num - 1, -1):
            product = i * j

            # If product is smaller than current largest, no need to check smaller j
            if product <= largest:
                break

            if is_palindrome(product):
                largest = product
                # Once we find a palindrome for this i, we can break
                # as further j will give smaller products
                break

    return largest


# Example for 2-digit numbers
print(f"For 2-digit numbers: {largest_palindrome_product(2)}")

# For 3-digit numbers (Project Euler Problem 4)
print(f"For 3-digit numbers: {largest_palindrome_product(3)}")
