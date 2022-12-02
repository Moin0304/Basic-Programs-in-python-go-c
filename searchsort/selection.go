package main

import "fmt"

func main() {
	sample := []int{3, 4, 5, 2, 1}
	selectionSort(sample)
	sample = []int{3, 4, 5, 2, 1, 7, 8, -1, -3}
	selectionSort(sample)
}

func selectionSort(arr []int) {
	a := len(arr)
	for i := 0; i < a-1; i++ {
		pos := i
		for j := i + 1; j < a; j++ {
			if arr[j] < arr[pos] {
				arr[j], arr[pos] = arr[pos], arr[j]
			}
		}
	}
	fmt.Println("\nAfter SelectionSort")
	for _, val := range arr {
		fmt.Print(val, " ")
	}
}
