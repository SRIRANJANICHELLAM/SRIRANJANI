def remove_duplicates(arr):
    seen = {}
    unique_elements = []

    for num in arr:
        if num not in seen:
            seen[num] = True
            unique_elements.append(num)

    return unique_elements
arr = list(map(int, input("Enter elements of the array separated by space: ").split()))
result = remove_duplicates(arr)
print("Array with duplicates:", arr)
print("Array after removing duplicates:", result)
