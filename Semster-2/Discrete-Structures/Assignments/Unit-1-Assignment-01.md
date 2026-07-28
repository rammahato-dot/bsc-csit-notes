---
title: Unit 1 Assignment 01
course: Discrete Structures
unit: 1
author: Ram
---

# Unit 1 Assignment 01

> **Course:** Discrete Structures  
> **Unit:** 1 – Set Theory and Logic

---

# Question 1

## Question

**Define subset and power set.**

---

## Solution

### Subset

A **subset** is a set whose every element is also an element of another set.

If every element of set **A** belongs to set **B**, then **A** is called a subset of **B**.

### Notation

```text
A ⊆ B
```

### Mathematical Definition

```text
A ⊆ B

if and only if

∀x (x ∈ A → x ∈ B)
```

### Example

Let

```text
A = {1,2}

B = {1,2,3,4}
```

Since every element of **A** is also present in **B**,

```text
A ⊆ B
```

---

### Proper Subset

A set **A** is called a **proper subset** of **B** if:

- Every element of **A** belongs to **B**, and
- **A ≠ B**

Notation

```text
A ⊂ B
```

Example

```text
A = {1,2}

B = {1,2,3}
```

Therefore,

```text
A ⊂ B
```

---

### Power Set

The **power set** of a set is the set containing **all possible subsets** of that set, including the empty set and the set itself.

### Notation

```text
P(A)
```

### Formula

If a set contains **n** elements, then

```math
|P(A)| = 2^n
```

where

- `|P(A)|` = Number of subsets
- `n` = Number of elements in the set

---

### Example

Let

```text
A = {a,b}
```

The subsets of **A** are

```text
∅

{a}

{b}

{a,b}
```

Hence,

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

Since the set contains **2** elements,

```text
|P(A)|

=

2²

=

4
```

---

### Final Answer

- A **subset** is a set whose every element belongs to another set.
- A **power set** is the set of all possible subsets of a given set.
- If a set contains **n** elements, its power set contains **2ⁿ** subsets.

---

# Question 2

## Question

**List any four rules of inference.**

---

## Solution

Rules of inference are valid logical rules used to derive conclusions from given premises. They are widely used in mathematics, computer science, and formal proofs.

### 1. Modus Ponens (Law of Detachment)

If

```text
p → q

p
```

then

```text
∴ q
```

**Example**

```text
If it rains, the road becomes wet.

It is raining.

Therefore, the road is wet.
```

---

### 2. Modus Tollens

If

```text
p → q

¬q
```

then

```text
∴ ¬p
```

**Example**

```text
If the machine is running, the light is ON.

The light is not ON.

Therefore, the machine is not running.
```

---

### 3. Hypothetical Syllogism

If

```text
p → q

q → r
```

then

```text
∴ p → r
```

**Example**

```text
If I study, I pass.

If I pass, I graduate.

Therefore,

If I study, I graduate.
```

---

### 4. Disjunctive Syllogism

If

```text
p ∨ q

¬p
```

then

```text
∴ q
```

**Example**

```text
Either Ram is in the library or in the classroom.

Ram is not in the library.

Therefore,

Ram is in the classroom.
```

---

### Summary Table

| Rule | Logical Form |
|-------|--------------|
| Modus Ponens | `p → q`, `p` ⟹ `q` |
| Modus Tollens | `p → q`, `¬q` ⟹ `¬p` |
| Hypothetical Syllogism | `p → q`, `q → r` ⟹ `p → r` |
| Disjunctive Syllogism | `p ∨ q`, `¬p` ⟹ `q` |

---

### Final Answer

The four commonly used rules of inference are:

1. Modus Ponens
2. Modus Tollens
3. Hypothetical Syllogism
4. Disjunctive Syllogism

---

# Question 3

## Question

**Explain fuzzy set with an example. How do you find the complement of a fuzzy set?**

---

## Solution

### Definition

A **fuzzy set** is a set in which each element has a **degree of membership** ranging from **0 to 1**.

Unlike a classical set, where an element either belongs (`1`) or does not belong (`0`), a fuzzy set allows **partial membership**.

The concept of fuzzy sets was introduced by **Lotfi A. Zadeh** in **1965**.

---

### Membership Function

A fuzzy set is represented using a **membership function**.

Notation:

```math
\mu_A(x)
```

where

- `μA(x) = 0` → Element does not belong to the set.
- `0 < μA(x) < 1` → Element partially belongs.
- `μA(x) = 1` → Element fully belongs.

---

### Example

Consider the fuzzy set **Young People**.

```text
A = {

(15,1.0),

(20,0.8),

(30,0.5),

(40,0.2),

(50,0.0)

}
```

This means:

| Age | Membership Value |
|----:|-----------------:|
| 15 | 1.0 |
| 20 | 0.8 |
| 30 | 0.5 |
| 40 | 0.2 |
| 50 | 0.0 |

A 15-year-old fully belongs to the set **Young**, while a 40-year-old belongs only slightly.

---

### Complement of a Fuzzy Set

The **complement** of a fuzzy set represents the degree to which an element does **not** belong to the original set.

### Formula

```math
\mu_{A'}(x)=1-\mu_A(x)
```

---

### Example

Suppose

```text
A = {

(a,0.2),

(b,0.5),

(c,0.8)

}
```

Find the complement.

Using

```math
\mu_{A'}(x)=1-\mu_A(x)
```

we get

| Element | μA(x) | μA′(x) |
|--------|-------:|--------:|
| a | 0.2 | 0.8 |
| b | 0.5 | 0.5 |
| c | 0.8 | 0.2 |

Therefore,

```text
A' = {

(a,0.8),

(b,0.5),

(c,0.2)

}
```

---

### Applications of Fuzzy Sets

Fuzzy sets are used in:

- Artificial Intelligence (AI)
- Machine Learning
- Robotics
- Medical diagnosis
- Washing machines
- Air conditioners
- Decision support systems

---

### Final Answer

A fuzzy set is a set in which elements have membership values between **0** and **1**, allowing partial membership. The complement of a fuzzy set is found using the formula:

```math
\mu_{A'}(x)=1-\mu_A(x)
```

This gives the degree to which an element does **not** belong to the fuzzy set.

---

# Question 4

## Question

**Give an example of a tautology and a contradiction. Show that implication and contrapositive are logically equivalent.**

**Hint:** Prove

```text
p → q ≡ ¬q → ¬p
```

---

## Solution

### (a) Example of a Tautology

A **tautology** is a compound proposition that is **always true**, regardless of the truth values of its variables.

Example:

```text
p ∨ ¬p
```

Truth Table:

| p | ¬p | p ∨ ¬p |
|---|----|---------|
| T | F | T |
| F | T | T |

Since the final column contains only **T**, the proposition is a **tautology**.

---

### (b) Example of a Contradiction

A **contradiction** is a compound proposition that is **always false**.

Example:

```text
p ∧ ¬p
```

Truth Table:

| p | ¬p | p ∧ ¬p |
|---|----|---------|
| T | F | F |
| F | T | F |

Since the final column contains only **F**, the proposition is a **contradiction**.

---

### (c) Proof that Implication and Contrapositive are Equivalent

We need to prove:

```text
p → q ≡ ¬q → ¬p
```

Construct the truth table.

| p | q | p → q | ¬q | ¬p | ¬q → ¬p |
|---|---|--------|----|----|----------|
| T | T | T | F | F | T |
| T | F | F | T | F | F |
| F | T | T | F | T | T |
| F | F | T | T | T | T |

Compare the last two columns.

| p → q | ¬q → ¬p |
|--------|----------|
| T | T |
| F | F |
| T | T |
| T | T |

Since both columns are identical,

```text
p → q ≡ ¬q → ¬p
```

Hence, **implication and its contrapositive are logically equivalent.**

---

# Question 5

## Question

Let

```text
A : Aldo is Italian

B : Bob is English
```

Formalize the following statements using propositional logic.

---

## Solution

### (a) Aldo isn't Italian.

```text
¬A
```

---

### (b) Aldo is Italian while Bob is English.

The word **while** means **and**.

```text
A ∧ B
```

---

### (c) If Aldo is Italian then Bob is not English.

```text
A → ¬B
```

---

### (d) Aldo is Italian or if Aldo isn't Italian then Bob is English.

The statement has two parts.

- Aldo is Italian.
- If Aldo isn't Italian, then Bob is English.

Therefore,

```text
A ∨ (¬A → B)
```

---

### (e) Either Aldo is Italian and Bob is English, or neither Aldo is Italian nor Bob is English.

First part:

```text
A ∧ B
```

Second part:

```text
¬A ∧ ¬B
```

Hence,

```text
(A ∧ B) ∨ (¬A ∧ ¬B)
```

---

### Final Answers

| Statement | Symbolic Form |
|-----------|---------------|
| (a) | `¬A` |
| (b) | `A ∧ B` |
| (c) | `A → ¬B` |
| (d) | `A ∨ (¬A → B)` |
| (e) | `(A ∧ B) ∨ (¬A ∧ ¬B)` |

---

# Question 6

## Question

**State which rule of inference is the basis of the following argument.**

> It is below freezing and raining now, therefore, it is below freezing now.

---

## Solution

Let

```text
p : It is below freezing.

q : It is raining.
```

The given statement can be written as

```text
p ∧ q

∴ p
```

This argument follows the rule called **Simplification** (also known as **Conjunction Elimination**).

### Rule

```text
p ∧ q

∴ p
```

or

```text
p ∧ q

∴ q
```

This means that if two statements are true together, then each statement is individually true.

---

### Example

```text
Ram is studying and listening to music.

Therefore,

Ram is studying.
```

---

### Final Answer

The rule of inference used is:

```text
Simplification (Conjunction Elimination)

p ∧ q

∴ p
```

This rule allows us to infer either component of a conjunction.

---

# Question 7

## Question

**Show that** `¬(p ∨ q)` **and** `¬p ∧ ¬q` **are logically equivalent.**

---

## Solution

We will use a truth table to prove the equivalence.

| p | q | p ∨ q | ¬(p ∨ q) | ¬p | ¬q | ¬p ∧ ¬q |
|---|---|--------|----------|----|----|----------|
| T | T | T | F | F | F | F |
| T | F | T | F | F | T | F |
| F | T | T | F | T | F | F |
| F | F | F | T | T | T | T |

### Comparison

| ¬(p ∨ q) | ¬p ∧ ¬q |
|-----------|----------|
| F | F |
| F | F |
| F | F |
| T | T |

Since the final two columns are identical,

```text
¬(p ∨ q) ≡ ¬p ∧ ¬q
```

Hence, **¬(p ∨ q)** and **¬p ∧ ¬q** are **logically equivalent**.

This law is known as **De Morgan's First Law**.

---

# Question 8

## Question

**Which rule of inference is used in the following argument?**

> Ram is hardworking.  
> If Ram is hardworking, then he is intelligent.  
> Therefore, Ram is intelligent.

---

## Solution

Let

```text
p : Ram is hardworking.

q : Ram is intelligent.
```

The argument becomes

```text
p

p → q

∴ q
```

This follows the rule of inference called **Modus Ponens** (Law of Detachment).

### Rule

```text
p → q

p

∴ q
```

### Explanation

If a statement is true and its implication is also true, then the conclusion must be true.

### Final Answer

The rule of inference used is:

```text
Modus Ponens (Law of Detachment)
```

---

# Question 9

## Question

**Check whether the following Well-Formed Formulas (WFFs) are valid or not.**

### (a)

```text
((P → Q) ∧ (Q → R)) → (P → R)
```

### Solution

Construct the truth table.

| P | Q | R | P→Q | Q→R | (P→Q)∧(Q→R) | P→R | Final Formula |
|---|---|---|-----|-----|-------------|-----|---------------|
| T | T | T | T | T | T | T | T |
| T | T | F | T | F | F | F | T |
| T | F | T | F | T | F | T | T |
| T | F | F | F | T | F | F | T |
| F | T | T | T | T | T | T | T |
| F | T | F | T | F | F | T | T |
| F | F | T | T | T | T | T | T |
| F | F | F | T | T | T | T | T |

### Observation

The final column contains only **T**.

Therefore,

```text
((P → Q) ∧ (Q → R)) → (P → R)
```

is a **Valid Formula (Tautology)**.

This represents the **Law of Hypothetical Syllogism**.

---

## (b)

```text
(P → Q) → (¬P → ¬Q)
```

### Solution

Construct the truth table.

| P | Q | P→Q | ¬P | ¬Q | ¬P→¬Q | Final Formula |
|---|---|-----|----|----|--------|---------------|
| T | T | T | F | F | T | T |
| T | F | F | F | T | T | T |
| F | T | T | T | F | F | F |
| F | F | T | T | T | T | T |

### Observation

The final column contains both **T** and **F**.

Therefore,

```text
(P → Q) → (¬P → ¬Q)
```

is **not valid**.

It is a **contingency**, because its truth value depends on the values of **P** and **Q**.

### Explanation

Many students mistakenly believe that

```text
P → Q
```

implies

```text
¬P → ¬Q
```

This is **incorrect**.

The correct logical equivalence is

```text
P → Q ≡ ¬Q → ¬P
```

which is called the **Contrapositive Law**.

---

## Final Answer

| Formula | Result |
|----------|--------|
| `((P→Q) ∧ (Q→R)) → (P→R)` | **Valid (Tautology)** |
| `(P→Q) → (¬P→¬Q)` | **Not Valid (Contingency)** |

---

# Question 10

## Question

**Define Refutation and Resolution.** *(1 + 1 Marks)*

---

## Solution

### (a) Refutation

**Refutation** is a proof technique used to show that a statement is true by assuming its negation and deriving a contradiction.

### Procedure

1. Assume the negation of the statement to be proved.
2. Apply logical rules and inference.
3. If a contradiction is obtained, the assumption is false.
4. Therefore, the original statement is true.

### Example

To prove:

```text
P
```

Assume:

```text
¬P
```

If this assumption leads to a contradiction (False), then

```text
P
```

must be true.

---

### (b) Resolution

**Resolution** is a rule of inference used to derive a new clause from two clauses containing complementary literals.

It is widely used in:

- Automated theorem proving
- Artificial Intelligence
- Logic programming
- Propositional logic

### Resolution Rule

Given

```text
P ∨ Q

¬P ∨ R
```

The resolvent is

```text
Q ∨ R
```

### Example

Given

```text
A ∨ B

¬A ∨ C
```

Applying resolution,

```text
B ∨ C
```

is obtained.

---

### Final Answer

- **Refutation:** A proof method that assumes the negation of a statement and derives a contradiction.
- **Resolution:** A rule of inference that combines two clauses containing complementary literals to derive a new clause.

---

# Question 11

## Question

**Express the following sentences using quantifiers.**

---

## Solution

### Let the domain be:

```text
All people (or all relevant objects), unless otherwise specified.
```

---

### (a) Not all people are loyal.

Let

```text
L(x): x is loyal
```

Then

```text
¬∀x L(x)
```

Equivalent form:

```text
∃x ¬L(x)
```

Meaning:

> There exists at least one person who is not loyal.

---

### (b) Everybody loves somebody.

Let

```text
L(x,y):

x loves y
```

Then

```text
∀x ∃y L(x,y)
```

Meaning:

> Every person loves at least one person.

---

### (c) Someone has passed the exam.

Let

```text
P(x):

x has passed the exam
```

Then

```text
∃x P(x)
```

Meaning:

> At least one person has passed the exam.

---

### (d) Aquatic animals can't live without water.

Let

```text
A(x):

x is an aquatic animal

W(x):

x can live without water
```

Then

```text
∀x (A(x) → ¬W(x))
```

Meaning:

> Every aquatic animal cannot live without water.

---

### (e) Some subjects are not interesting.

Let

```text
I(x):

x is interesting
```

Domain:

```text
All subjects
```

Then

```text
∃x ¬I(x)
```

Meaning:

> There exists at least one subject that is not interesting.

---

## Summary Table

| Sentence | Predicate Logic |
|----------|-----------------|
| Not all people are loyal. | `¬∀x L(x)` or `∃x ¬L(x)` |
| Everybody loves somebody. | `∀x ∃y L(x,y)` |
| Someone has passed the exam. | `∃x P(x)` |
| Aquatic animals can't live without water. | `∀x (A(x) → ¬W(x))` |
| Some subjects are not interesting. | `∃x ¬I(x)` |

---

# Assignment Summary

| Question | Topic |
|----------|-------|
| 1 | Subset and Power Set |
| 2 | Rules of Inference |
| 3 | Fuzzy Sets |
| 4 | Tautology, Contradiction, Contrapositive |
| 5 | Propositional Logic |
| 6 | Rule of Inference (Simplification) |
| 7 | De Morgan's Law |
| 8 | Rule of Inference (Modus Ponens) |
| 9 | Validity of Well-Formed Formulas |
| 10 | Refutation and Resolution |
| 11 | Quantifiers |

---

# Key Takeaways

- A subset contains elements that all belong to another set.
- A power set contains all possible subsets of a set.
- Fuzzy sets allow partial membership with values between **0** and **1**.
- A tautology is always true, while a contradiction is always false.
- The implication and its contrapositive are logically equivalent:

```text
p → q ≡ ¬q → ¬p
```

- Common rules of inference include Modus Ponens, Modus Tollens, Simplification, Hypothetical Syllogism, and Disjunctive Syllogism.
- De Morgan's First Law states:

```text
¬(p ∨ q) ≡ ¬p ∧ ¬q
```

- Resolution and refutation are important proof techniques in logic.
- Quantifiers (`∀` and `∃`) are used to express statements involving variables.

---

# Conclusion

This assignment covers the fundamental concepts of **Set Theory** and **Logic**, including subsets, power sets, fuzzy sets, propositional logic, truth tables, rules of inference, logical equivalence, refutation, resolution, and predicate logic. Mastering these topics provides a strong foundation for the remaining units of the Discrete Structures course.