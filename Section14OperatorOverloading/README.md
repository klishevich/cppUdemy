# Operator Overloading

Not allowed to overload
> :: Scope resolution operator 
> :? Conditional operator
> .* pointer to member operator
> . dot operator
> sizeof operator

## Basic rules
1. Precedence and associativity cant change
2. Arity cant be changed
3. Can not overload for primitive types (int, double, etc.)
4. Cant create new operators
5. "=" must be a member method
