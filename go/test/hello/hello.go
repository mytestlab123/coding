// docs: https://go.dev/doc/tutorial/greetings-multiple-people
// Return greetings for multiple people

// docs: https://go.dev/doc/tutorial/compile-install
// Compile and install the application
// ```
// go build
// go install
// hello
// ```

package main

import (
	"fmt"
	"log"
	"example.com/greetings"
)

func main() {

	log.SetPrefix("greetings: ")
	log.SetFlags(0)

	// message := greetings.Hello("Gladys")
	// message, err := greetings.Hello("Amit")
	names := []string{"Gladys", "Samantha", "Darrin"}
	messages, err := greetings.Hellos(names)

	if err != nil {
		log.Fatal(err)
	}
	fmt.Println(messages)
}