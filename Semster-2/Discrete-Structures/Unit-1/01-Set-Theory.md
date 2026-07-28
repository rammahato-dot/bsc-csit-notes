# Set Theory

> **Course:** Discrete Structures  
> **Unit:** 1 – Set Theory and Logic

---

## Learning Objectives

After studying this chapter, you should be able to:

- Define a set and its elements.
- Represent sets using different methods.
- Identify different types of sets.
- Understand subsets and supersets.
- Determine the cardinality of a set.
- Apply set notation correctly.
- Solve basic set-related problems.

---

# Introduction

Set Theory is one of the fundamental topics in mathematics and forms the basis of many areas of computer science, including databases, programming, probability, graph theory, and discrete mathematics.

A **set** is simply a collection of well-defined and distinct objects. These objects are called **elements** (or **members**) of the set.

For example, a group of students in a class, vowels of the English alphabet, or even numbers less than 10 can all be represented as sets.

---

# Definition of a Set

A **set** is a well-defined collection of distinct objects.

The objects contained in a set are called **elements**.

### Examples

```text
A = {1, 2, 3, 4}

B = {a, e, i, o, u}

C = {Sunday, Monday, Tuesday}
```

---

# Characteristics of a Set

A set has the following properties:

- Elements are **distinct** (no duplicates).
- Order of elements does **not** matter.
- Elements are enclosed within **curly braces `{}`**.

Example

```text
{1,2,3}

=

{3,2,1}
```

Both represent the same set.

Similarly,

```text
{1,2,2,3}

=

{1,2,3}
```

Duplicate elements are ignored.

---

# Notation

| Symbol | Meaning |
|---------|---------|
| `{}` | Set |
| `∈` | Belongs to |
| `∉` | Does not belong to |
| `⊂` | Proper subset |
| `⊆` | Subset |
| `⊃` | Proper superset |
| `⊇` | Superset |
| `∅` | Empty (Null) set |
| `U` | Universal set |
| `|A|` or `n(A)` | Cardinality of set A |

### Examples

```text
2 ∈ {1,2,3}

True
```

```text
5 ∉ {1,2,3}

True
```

---

# Methods of Representing Sets

## 1. Roster (Tabular) Method

Elements are listed inside curly braces.

### Example

```text
A = {2,4,6,8,10}
```

---

## 2. Set Builder Method

A rule is used to describe the set.

### General Form

```text
{x | condition}
```

Read as

> "The set of all x such that the given condition holds."

### Example

```text
A = {x | x is an even positive integer less than 12}
```

Equivalent roster form

```text
A = {2,4,6,8,10}
```

---

# Types of Sets

## Empty (Null) Set

A set with no elements.

Notation

```text
∅

or

{}
```

Example

```text
A = {x | x < 0 and x is a natural number}
```

Since no natural number is negative,

```text
A = ∅
```

---

## Singleton Set

A set containing exactly one element.

Example

```text
A = {5}
```

Cardinality

```text
|A| = 1
```

---

## Finite Set

A set containing a limited number of elements.

Example

```text
A = {1,2,3,4,5}
```

---

## Infinite Set

A set containing infinitely many elements.

Example

```text
N = {1,2,3,4,...}
```

---

## Equal Sets

Two sets are equal if they contain exactly the same elements.

Example

```text
A = {1,2,3}

B = {3,2,1}
```

Therefore,

```text
A = B
```

---

## Equivalent Sets

Two sets are equivalent if they have the same number of elements.

Example

```text
A = {1,2,3}

B = {a,b,c}
```

Both contain three elements.

Therefore,

```text
|A| = |B|
```

---

## Universal Set

The universal set contains all elements under consideration.

Notation

```text
U
```

Example

```text
U = {1,2,3,4,5,6,7,8,9,10}
```

---

# Cardinality of a Set

The **cardinality** of a set is the number of elements it contains.

Notation

```text
|A|

or

n(A)
```

Example

```text
A = {2,4,6,8}
```

Therefore,

```text
|A| = 4
```

---

# Subsets

A set **A** is a subset of **B** if every element of A is also an element of B.

Notation

```text
A ⊆ B
```

Example

```text
A = {1,2}

B = {1,2,3,4}
```

Therefore,

```text
A ⊆ B
```

---

# Proper Subset

A proper subset is a subset that is **not equal** to the original set.

Notation

```text
A ⊂ B
```

Example

```text
A = {1,2}

B = {1,2,3}
```

Hence,

```text
A ⊂ B
```

---

# Power Set

The **power set** of a set is the set of all possible subsets of that set.

Notation

```text
P(A)
```

Example

```text
A = {1,2}
```

Subsets

```text
∅

{1}

{2}

{1,2}
```

Therefore,

```text
P(A)

=

{∅,{1},{2},{1,2}}
```

---

# Number of Subsets

If a set contains **n** elements, then

```math
|P(A)| = 2^n
```

### Example

```text
A = {1,2,3}
```

Number of elements

```text
n = 3
```

Number of subsets

```text
2³ = 8
```

---

# Solved Examples

## Example 1

Find the cardinality of

```text
A = {2,4,6,8,10}
```

### Solution

The set contains five elements.

```text
|A| = 5
```

---

## Example 2

Write the following set in roster form.

```text
A = {x | x is an odd natural number less than 10}
```

### Solution

```text
A = {1,3,5,7,9}
```

---

## Example 3

Find the power set of

```text
A = {a,b}
```

### Solution

```text
P(A)

=

{

∅,

{a},

{b},

{a,b}

}
```

---

# Applications of Set Theory

Set Theory is widely used in computer science:

- Database management systems
- SQL operations
- Programming languages
- Digital logic
- Artificial Intelligence
- Graph Theory
- Probability
- Data analysis

---

# Exam Tips

- Memorize all set symbols.
- Remember that order does not matter.
- Duplicate elements are ignored.
- Learn the difference between **subset** and **proper subset**.
- Memorize the formula:

```math
|P(A)| = 2^n
```

---

# Common Mistakes

❌ Treating duplicate elements as different.

```text
{1,2,2,3}

≠

4 elements
```

Correct:

```text
{1,2,3}
```

---

❌ Assuming order matters.

```text
{1,2,3}

=

{3,2,1}
```

---

❌ Confusing

```text
∈

with

⊆
```

Remember:

- `∈` → element belongs to a set.
- `⊆` → one set is a subset of another.

---

# Practice Questions

### Theory

1. Define a set with an example.
2. Explain the roster and set-builder methods.
3. Differentiate between finite and infinite sets.
4. What is a power set?
5. Define cardinality.

### Problems

1. Find the cardinality of `{2,4,6,8,10,12}`.
2. Write `{x | x is a multiple of 5 less than 30}` in roster form.
3. Find the power set of `{a,b,c}`.
4. Determine whether `{1,2}` is a proper subset of `{1,2,3}`.

---

# Summary

- A set is a well-defined collection of distinct objects.
- Elements are enclosed within `{}`.
- Order of elements does not matter.
- Duplicate elements are ignored.
- Sets can be represented using roster or set-builder methods.
- Common types include empty, singleton, finite, infinite, equal, equivalent, and universal sets.
- Every set has a cardinality.
- Every set has a power set containing all possible subsets.
- A set with **n** elements has **2ⁿ** subsets.

---

## Next Topic

➡️ **02 – Set Operations**, where you'll learn:

- Union
- Intersection
- Difference
- Complement
- Symmetric Difference
- Venn Diagrams
- Set Identities