package main

import "fmt"

func main() {
	var a int
	a = 5
	for i := 0; i < a; i++ {
		for j := 0; j < a; j++ {
			if i >= j {
				fmt.Print("*", "")
			}
		}
		fmt.Print("\n")
	}
	for i := 0; i < a; i++ {
		fmt.Print("     ")
		for j := 0; j < a; j++ {
			if i <= j {
				fmt.Print("*", "")
			}
		}
		fmt.Print("      \n")
	}
}
