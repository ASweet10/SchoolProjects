package com.jetbrains;

public class Lifeform {

    // Blank constructor
    public Lifeform()
    {

    }

    // Constructor: Automatically runs each time an object is created
    public Lifeform(String description)
    {
        LifeformDescription = description;
    }

    public void DisplayLifeformDescription()
    {
        System.out.println("You see " + LifeformDescription);
    }

    private String LifeformDescription;
}