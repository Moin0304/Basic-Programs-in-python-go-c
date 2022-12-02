package main

import "fmt"

func main() {
	sample := []int{2, 5, 3, 4, 7, 1}
	insertion(sample)

}

func insertion(sample []int) {
	n := len(sample)
	for i := 1; i < n; i++ {
		a := sample[i]
		pos := i
		for pos > 0 && sample[pos-1] > a {
			sample[pos] = sample[pos-1]
			pos = pos - 1

		}
		sample[pos] = a

	}
	fmt.Println("\nAfter SelectionSort")
	for _, val := range sample {
		fmt.Print(val, " ")
	}
}
