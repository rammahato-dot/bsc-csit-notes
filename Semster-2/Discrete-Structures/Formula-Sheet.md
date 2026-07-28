---
title: Unit 1 Formula Sheet
course: Discrete Structures
unit: 1
---

# Unit 1 – Formula Sheet

---

# Set Theory

## Number of Subsets

```text
|P(A)| = 2ⁿ
```

where

```text
n = Number of elements
```

---

# Inclusion–Exclusion Principle

## Two Sets

```text
n(A∪B)

=

n(A)+n(B)-n(A∩B)
```

---

## Three Sets

```text
n(A∪B∪C)

=

n(A)

+n(B)

+n(C)

−n(A∩B)

−n(B∩C)

−n(A∩C)

+n(A∩B∩C)
```

---

# Fuzzy Sets

Membership Function

```text
μA(x)
```

Complement

```text
μA'(x)=1−μA(x)
```

---

# Logic

## Implication

```text
p→q

≡

¬p∨q
```

---

## Contrapositive

```text
p→q

≡

¬q→¬p
```

---

## Double Negation

```text
¬(¬p)=p
```

---

## De Morgan's Laws

```text
¬(p∧q)

=

¬p∨¬q
```

```text
¬(p∨q)

=

¬p∧¬q
```

---

## Identity Laws

```text
p∨F=p

p∧T=p
```

---

## Domination Laws

```text
p∨T=T

p∧F=F
```

---

## Idempotent Laws

```text
p∨p=p

p∧p=p
```

---

## Complement Laws

```text
p∨¬p=T

p∧¬p=F
```

---

## Commutative Laws

```text
p∨q=q∨p

p∧q=q∧p
```

---

## Associative Laws

```text
(p∨q)∨r

=

p∨(q∨r)
```

```text
(p∧q)∧r

=

p∧(q∧r)
```

---

## Distributive Laws

```text
p∨(q∧r)

=

(p∨q)∧(p∨r)
```

```text
p∧(q∨r)

=

(p∧q)∨(p∧r)
```

---

# Quantifiers

Universal

```text
∀xP(x)
```

Existential

```text
∃xP(x)
```

Negation

```text
¬∀xP(x)

=

∃x¬P(x)
```

```text
¬∃xP(x)

=

∀x¬P(x)
```

---

# Rules of Inference

```text
Modus Ponens

p→q

p

∴q
```

```text
Modus Tollens

p→q

¬q

∴¬p
```

```text
Hypothetical Syllogism

p→q

q→r

∴p→r
```

```text
Disjunctive Syllogism

p∨q

¬p

∴q
```

```text
Simplification

p∧q

∴p
```