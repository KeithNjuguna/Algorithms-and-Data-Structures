def find_pair_with_target(arr1, arr2, target):
    for num1 in arr1:
        for num2 in arr2:
            if num1 + num2 == target:
                print(f"Pair found: ({num1}, {num2})")
                return  # Stop execution once a valid pair is found
    print("No pair found.")

# Example usage
arr1 = [1, 3, 5, 7]
arr2 = [2, 4, 6, 8]
target = 9
find_pair_with_target(arr1, arr2, target)