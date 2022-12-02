package main

import "fmt"

func main() {
	var n, c int
	fmt.Println("enter a number")
	fmt.Scanf("%d", &n)
	for i := 1; i < n+1; i++ {
		if n%i == 0 {
			c++
		}

	}
	if c > 2 {
		fmt.Println("its not a prime")
	} else {
		fmt.Println("its prime")
	}

}
