class Rectangle {
public:
  void setLength (double length);
  void setWidth (double width);
  double getLength () const;
  double getWidth () const;
  double calculateArea () const;
  double calculatePerimeter () const;
private:
  double mLength;
  double mWidth;
};