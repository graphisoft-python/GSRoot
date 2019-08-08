# Class FloatRect

## Inherit

* object


## Methods

```
__init__(self) -> None
__init__(self,float,float,float,float) -> None
__init__(self,FloatPoint) -> None
__eq__(self,FloatRect) -> bool
__ne__(self,FloatRect) -> bool
__str__(self) -> unicode

Reset(self) -> None
Set(self,float,float,float,float) -> None
Set(self,FloatPoint) -> None
SetWithSize(self,float,float,float,float) -> None

GetLeft(self) -> float
GetTop(self) -> float
GetRight(self) -> float
GetBottom(self) -> float
GetWidth(self) -> float
GetHeight(self) -> float

SetLeft(self,float) -> None
SetTop(self,float) -> None
SetRight(self,float) -> None
SetBottom(self,float) -> None
SetWidth(self,float) -> None
SetHeight(self,float) -> None
SetSize(self,float,float) -> None
Resize(self,float,float) -> None
Inset(self,float,float) -> None
Offset(self,float,float) -> None

IsOverlapping(self,FloatRect) -> bool
IsInside(self,float,float) -> bool
IsInside(self,FloatPoint) -> bool
IsInside(self,FloatRect) -> bool
IsOutside(self,FloatRect) -> bool
IsEmpty(self) -> bool

Union(self,FloatRect) -> FloatRect
Union(self,FloatPoint) -> FloatRect
Intersection(self,FloatRect) -> FloatRect

Unify(self,FloatRect) -> None
Unify(self,FloatPoint) -> None
Intersect(self,FloatRect) -> None

```