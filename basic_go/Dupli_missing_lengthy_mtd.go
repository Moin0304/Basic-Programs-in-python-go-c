package main

import (
	"fmt"
	"sort"
)

func sett(intSlice []int) []int {
	keys := make(map[int]bool)
	list := []int{}
	for _, entry := range intSlice {
		if _, value := keys[entry]; !value {
			keys[entry] = true
			list = append(list, entry)
		}
	}
	return list
}

func count(arr []int, n int) int {
	var c = 0
	for i := 0; i < len(arr); i++ {
		if n == arr[i] {
			c++
		}
	}
	return c
}

func not(arr []int, x int) bool {
	count := 0
	for i := 0; i < len(arr); i++ {
		if x == arr[i] {
			count += 1
		}
	}
	if count == 0 {
		return true
	} else {
		return false
	}
}

func duplicate_elemen(arr []int) {
	v := sett(arr)
	sort.Ints(v)
	x := v[0]
	var a = [2][]int{}
	for true {
		if count(arr, x) > 1 {
			a[0] = append(a[0], x)
		}
		if not(v, x) {
			v = append(v, x)
			a[1] = append(a[1], x)
		}
		if len(v) == len(arr) {
			break
		}
		x += 1
	}
	fmt.Println(a)

}

func main() {

	aaa := []int{1, 2, 4, 2, 6, 1}

	duplicate_elemen(aaa)

}
