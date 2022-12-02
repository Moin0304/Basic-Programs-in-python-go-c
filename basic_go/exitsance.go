package main

import "fmt"

func main() {
	var car = map[string]string{"brand": "MarutiSuziki", "model1": "Dzire", "year": "2013", "day": ""}
	val1, ok1 := car["brand"]
	val2, ok2 := car["color"]
	val3, ok3 := car["day"]
	_, ok4 := car["model"] // Only checking for existing key and not its value

	fmt.Println(val1, ok1)
	fmt.Println(val2, ok2)
	fmt.Println(val3, ok3)
	fmt.Println(ok4)
}
