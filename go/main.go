package main

import "fmt"

type You06 struct {
	i int64
	j int64
	k int64
	l int64
	m int64
}

func pp(i int64) *You06 {
	if i%2 == 0 {
		return &You06{
			i: i,
			j: i,
			k: i,
			l: i,
			m: i,
		}
	}
	return nil
}

func main() {
	sum := int64(0)
	i := int64(1)
	for i < 20000000000 {
		i += 3
		p := pp(i)
		if p != nil {
			sum += p.i
		}
	}

	fmt.Printf("%d\n", sum)
}
