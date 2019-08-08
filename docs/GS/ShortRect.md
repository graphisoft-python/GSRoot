# Class ShortRect

## Inherit

* object


## Methods

```
__init__(self) -> None
__init__(self,short,short,short,short) -> None
__init__(self,ShortPoint) -> None
__eq__(self,ShortRect) -> bool
__ne__(self,ShortRect) -> bool
__str__(self) -> unicode

Reset(self) -> None
Set(self,short,short,short,short) -> None
Set(self,ShortPoint) -> None
SetWithSize(self,short,short,short,short) -> None

GetLeft(self) -> short
GetTop(self) -> short
GetRight(self) -> short
GetBottom(self) -> short
GetWidth(self) -> short
GetHeight(self) -> short

SetLeft(self,short) -> None
SetTop(self,short) -> None
SetRight(self,short) -> None
SetBottom(self,short) -> None
SetWidth(self,short) -> None
SetHeight(self,short) -> None
SetSize(self,short,short) -> None
Resize(self,short,short) -> None
Inset(self,short,short) -> None
Offset(self,short,short) -> None

IsOverlapping(self,ShortRect) -> bool
IsInside(self,short,short) -> bool
IsInside(self,ShortPoint) -> bool
IsInside(self,ShortRect) -> bool
IsOutside(self,ShortRect) -> bool
IsEmpty(self) -> bool

Union(self,ShortRect) -> ShortRect
Union(self,ShortPoint) -> ShortRect
Intersection(self,ShortRect) -> ShortRect

Unify(self,ShortRect) -> None
Unify(self,ShortPoint) -> None
Intersect(self,ShortRect) -> None

```