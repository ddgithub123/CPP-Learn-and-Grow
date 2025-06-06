# 🔽 Selection Sort Algorithm

A basic implementation of the **Selection Sort** algorithm in Python. Selection Sort is an in-place comparison-based sorting algorithm with a simple and intuitive process.

---

## 📌 What is Selection Sort?

Selection Sort divides the array into two parts:
- The **sorted part** at the front of the array.
- The **unsorted part** at the end.

It repeatedly selects the **minimum element** from the unsorted part and moves it to the end of the sorted part.

---

## 📊 Time & Space Complexity

| Case        | Time Complexity |
|-------------|-----------------|
| Best Case   | O(n²)           |
| Average     | O(n²)           |
| Worst Case  | O(n²)           |

- **Space Complexity**: O(1) (in-place)
- **Stable Sort**: ❌ No (can be made stable with modifications)

---

## 🧠 How It Works

1. Start with the first element.
2. Find the smallest element in the unsorted part.
3. Swap it with the first unsorted element.
4. Move the boundary of the sorted part one step right.
5. Repeat until the array is sorted.

---

## 📸 Visualization

<p align="center">
  <img src="images/WhatsApp Image 2025-06-06 at 11.20.16_474f4a19.jpg" width="600"/>
</p>

<p align="center"><i>Figure: Selection Sort Step-by-Step Example</i></p>

---


