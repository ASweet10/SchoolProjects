package com.jetbrains;

public class Robot extends Lifeform {

    private String CasingColor;

    public Robot (String description, String casingColor)
    {
        super (description);
        CasingColor = casingColor;
    }

    public void displayCasingColor()
    {
        System.out.println("This robot has a " + CasingColor + " case.");
    }
}