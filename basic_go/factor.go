package main

import "fmt"

func main() {
	var n int
	fmt.Println("enter a number:")
	fmt.Scanf("%d", &n)
	for i := 1; i < n+1; i++ {
		if n%i == 0 {
			fmt.Println(i)
		}
	}

}
