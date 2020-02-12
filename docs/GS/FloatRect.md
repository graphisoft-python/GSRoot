# Class GSRoot.FloatRect

## Inherit

* object

## Methods

```
__init__(self) -> None
__init__(self,float,float,float,float) -> None
__init__(self,GSRoot.FloatPoint) -> None
__eq__(self,GSRoot.FloatRect) -> bool
__ne__(self,GSRoot.FloatRect) -> bool
__str__(self) -> unicode

Reset(self) -> None
Set(self,float,float,float,float) -> None
Set(self,GSRoot.FloatPoint) -> None
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

IsOverlapping(self,GSRoot.FloatRect) -> bool
IsInside(self,float,float) -> bool
IsInside(self,GSRoot.FloatPoint) -> bool
IsInside(self,GSRoot.FloatRect) -> bool
IsOutside(self,GSRoot.FloatRect) -> bool
IsEmpty(self) -> bool

Union(self,GSRoot.FloatRect) -> GSRoot.FloatRect
Union(self,GSRoot.FloatPoint) -> GSRoot.FloatRect
Intersection(self,GSRoot.FloatRect) -> GSRoot.FloatRect

Unify(self,GSRoot.FloatRect) -> None
Unify(self,GSRoot.FloatPoint) -> None
Intersect(self,GSRoot.FloatRect) -> None

```