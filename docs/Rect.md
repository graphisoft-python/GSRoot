# Class GSRoot.Rect

## Inherit

* object

## Methods

```
__init__(self) -> None
__init__(self, float, float, float, float) -> None
__init__(self, float, float, float, float, float) -> None
__init__(self, GSRoot.Point) -> None
__init__(self, GSRoot.Point, float) -> None
__init__(self, GSRoot.Point, GSRoot.Point) -> None
__init__(self, GSRoot.Point, GSRoot.Point,  float) -> None
__init__(self, GSRoot.Point, float, float) -> None
__init__(self, GSRoot.Point, float, float, float) -> None

__eq__(self, GSRoot.Rect) -> bool
__ne__(self, GSRoot.Rect) -> bool
__str__(self) -> unicode

GetBottom(self) -> float
GetCenter(self) -> GSRoot.Point
GetHeight(self) -> float
GetLeft(self) -> float
GetLeftBottom(self) -> GSRoot.Point
GetLeftTop(self) -> GSRoot.Point
GetRight(self) -> float
GetRightTop(self) -> GSRoot.Point
GetScale(self) -> float
GetTop(self) -> float
GetWidth(self) -> float
Inflate(self, float, float) -> None
Inset(self, float, float) -> None
Intersect(self, GSRoot.Rect) -> None
Intersection(self, GSRoot.Rect) -> GSRoot.Rect
IsEmpty(self) -> bool

IsInside(self, float, float) -> bool
IsInside(self, GSRoot.Point) -> bool
IsInside(self, GSRoot.Rect) -> bool

IsIntersecting(self, GSRoot.Rect) -> bool
IsOutside(self, GSRoot.Rect) -> bool
IsOverlapping(self, GSRoot.Rect) -> bool
Move(self, float, float) -> None
Offset(self, float, float) -> None
Reset(self) -> None
Resize(self, float, float) -> None

Set(self, float, float, float, float) -> None   
Set(self, GSRoot.Point) -> None
Set(self, GSRoot.Rect) -> None
Set(self, GSRoot.Point, GSRoot.Point) -> None
Set(self, GSRoot.Point, float, float) -> None

SetBottom(self, float) -> None
SetCenter(self, GSRoot.Point) -> None
SetHeight(self, float) -> None
SetLeft(self, float) -> None
SetLeftBottom(self, GSRoot.Point) -> None
SetLeftTop(self, GSRoot.Point) -> None
SetRight(self, float) -> None
SetRightBottom(self) -> GSRoot.Point
SetRightTop(self, GSRoot.Point) -> None
SetSize(self, float, float) -> None
SetTop(self, float) -> None
SetWidth(self, float) -> None
SetWithSize(self, float, float, float, float) -> None

Unify(self,  GSRoot.Rect) -> None
Unify(self,  GSRoot.Point) -> None

Union(self,  GSRoot.Rect) -> GSRoot.Rect
Union(self,  GSRoot.Point) -> GSRoot.Rect
```
