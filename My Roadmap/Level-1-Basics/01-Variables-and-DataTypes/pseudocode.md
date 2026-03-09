
# Pseudocode 

## Personal_ID

START
DECLARE name     AS string  = "Alice Johnson"
DECLARE age      AS int     = 20
DECLARE height   AS float   = 1.65
DECLARE gpa      AS double  = 3.85
DECLARE grade    AS char    = 'A'
DECLARE isStudent AS bool   = true

    PRINT "===== Student ID Card ====="
    PRINT "Name    : " + name
    PRINT "Age     : " + age
    PRINT "Height  : " + height
    PRINT "GPA     : " + gpa
    PRINT "Grade   : " + grade
    PRINT "Student : " + isStudent (if true → "YES" else "NO")
    PRINT "==========================="
END


## Product Inventory Item

Start

    // Variables
    DECLARE name      AS String
    DECLARE price     AS Double
    DECLARE quantity  AS Integer
    DECLARE category  AS Char
    DECLARE inStock   AS Boolean
    DECLARE value     AS Double

    // Input
    INPUT name
    INPUT price
    INPUT quantity
    INPUT category
    INPUT inStock

    // Process
    SET value = price * quantity

    // Validate category
    IF (category == 'E' OR category == 'F' OR category == 'C') THEN
        PRINT "Category : " + category
    ELSE
        PRINT "Category : Invalid"
    END IF

    // Output
    PRINT "Name     : " + name
    PRINT "Price    : " + price
    PRINT "Quantity : " + quantity
    PRINT "In Stock : " + IF (inStock == 1) THEN "Yes" ELSE "No"
    PRINT "Value    : $ " + value

End



### Project 1.3 — Temperature Unit Converter

START
DECLARE celsius    AS double
DECLARE fahrenheit AS double
DECLARE kelvin     AS double
DECLARE scale      AS char

    READ scale
    READ input value based on scale

    IF (scale == 'C')
        fahrenheit = (celsius * 9.0 / 5.0) + 32
        kelvin     = celsius + 273.15
        PRINT "Input       : " + celsius + " °C"
        PRINT "Fahrenheit  : " + fahrenheit + " °F"
        PRINT "Kelvin      : " + kelvin + " K"

    ELSE IF (scale == 'F')
        celsius = (fahrenheit - 32) * 5.0 / 9.0
        kelvin  = (fahrenheit - 32) * 5.0 / 9.0 + 273.15
        PRINT "Input       : " + fahrenheit + " °F"
        PRINT "Celsius     : " + celsius + " °C"
        PRINT "Kelvin      : " + kelvin + " K"

    ELSE IF (scale == 'K')
        celsius    = kelvin - 273.15
        fahrenheit = (kelvin - 273.15) * 9.0 / 5.0 + 32
        PRINT "Input       : " + kelvin + " K"
        PRINT "Celsius     : " + celsius + " °C"
        PRINT "Fahrenheit  : " + fahrenheit + " °F"

    ELSE
        PRINT "Error: invalid scale — enter C, F, or K"

    END IF

END