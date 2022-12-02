package main

import (
	"fmt"
	"sort"
)

func dupli_missing(arr []int) {
	sort.Ints(arr)
	a := [2][]int{}

	for i := arr[0]; i < len(arr)+arr[0]; i++ {
		count := 0
		for j := 0; j < len(arr); j++ {
			if i == arr[j] {
				count += 1
			}

		}
		if count >= 2 {
			a[0] = append(a[0], i)
		}
		if count == 0 {
			a[1] = append(a[1], i)
		}
	}
	fmt.Println(a)

}

func main() {
	dupli_missing([]int{19, 19, 16, 17, 20, 19, 16})
}
