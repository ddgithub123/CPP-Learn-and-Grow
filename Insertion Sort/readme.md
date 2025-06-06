# 🧩 Insertion Sort Algorithm

A simple implementation of the **Insertion Sort** algorithm in Python. Insertion Sort is a comparison-based sorting algorithm that builds the final sorted array one element at a time.

---

## 📌 What is Insertion Sort?

Insertion Sort works similarly to how we sort playing cards in our hands:

1. It picks one element at a time.
2. Compares it with elements before it.
3. Places it in its correct position in the sorted part of the array.

It is efficient for small datasets or nearly sorted data.

---

## 🔢 Time Complexity

| Case       | Time Complexity |
|------------|-----------------|
| Best Case  | O(n)            |
| Average    | O(n²)           |
| Worst Case | O(n²)           |

- **Space Complexity**: O(1) (In-place sorting)
- **Stable Sort**: ✅ Yes

---

## 🧠 Algorithm Steps

1. Start from the second element (index 1).
2. Compare it with the elements before it.
3. Shift all larger elements to the right.
4. Insert the current element at the correct position.
5. Repeat for all elements.

---

## 🎯 Visual Explanation

<p align="center">
  <img src="images/Screenshot 2025-06-06 102034.png" width="600"/>
  <img src="images/Screenshot 2025-06-06 102133.png" width="600"/>
  <img src="images/Screenshot 2025-06-06 102214.png" width="600"/>
</p>

<p align="center"><i>Figure: Step-by-step visualization of Insertion Sort</i></p>


