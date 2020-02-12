# Class GSRoot.ShortRect

## Inherit

* object

## Methods

```
__init__(self) -> None
__init__(self,int,int,int,int) -> None
__init__(self,GSRoot.ShortPoint) -> None
__eq__(self,GSRoot.ShortRect) -> bool
__ne__(self,GSRoot.ShortRect) -> bool
__str__(self) -> unicode

Reset(self) -> None
Set(self,int,int,int,int) -> None
Set(self,GSRoot.ShortPoint) -> None
SetWithSize(self,int,int,int,int) -> None

GetLeft(self) -> int
GetTop(self) -> int
GetRight(self) -> int
GetBottom(self) -> int
GetWidth(self) -> int
GetHeight(self) -> int

SetLeft(self,int) -> None
SetTop(self,int) -> None
SetRight(self,int) -> None
SetBottom(self,int) -> None
SetWidth(self,int) -> None
SetHeight(self,int) -> None
SetSize(self,int,int) -> None
Resize(self,int,int) -> None
Inset(self,int,int) -> None
Offset(self,int,int) -> None

IsOverlapping(self,GSRoot.ShortRect) -> bool
IsInside(self,int,int) -> bool
IsInside(self,GSRoot.ShortPoint) -> bool
IsInside(self,GSRoot.ShortRect) -> bool
IsOutside(self,GSRoot.ShortRect) -> bool
IsEmpty(self) -> bool

Union(self,GSRoot.ShortRect) -> GSRoot.ShortRect
Union(self,GSRoot.ShortPoint) -> GSRoot.ShortRect
Intersection(self,GSRoot.ShortRect) -> GSRoot.ShortRect

Unify(self,GSRoot.ShortRect) -> None
Unify(self,GSRoot.ShortPoint) -> None
Intersect(self,GSRoot.ShortRect) -> None
```
