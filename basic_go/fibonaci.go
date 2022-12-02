package main

import "fmt"

func main() {
	var a = 0
	var b = 1
	var c, n int
	fmt.Println("enter a number:")
	fmt.Scanf("%d", &n)

	for i := 0; i < b+1; i++ {
		fmt.Println(a)
		c = a + b
		a = b
		b = c
	}

}
