package main

import "fmt"

func bubble(array []int) {
	n := len(array)
	for i := n - 1; i >= 0; i-- {
		for j := 0; j < i; j++ {
			if array[j] > array[j+1] {
				temp := array[j]
				array[j] = array[j+1]
				array[j+1] = temp

			}
			// fmt.Println(array)

		}

	}
	fmt.Println(array)

	fmt.Println("\nAfter BubbleSort")
	for _, val := range array {
		fmt.Print(val, " ")
	}
}

func main() {
	array := []int{4, 7, 2, 9, 1, 3}
	bubble(array)

}
