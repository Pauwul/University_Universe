# Abstract
Spent around 2 hours doing this, I google a lot, learned about the workflow in java

## Key takeaways

- Can't iterate over the proprieties of an object, the language doesn't let you do that, at least that's what stackOverflow told me .
It would've been useful, in JS it's common practice to do that.
- Can't iterate over two objects with an _enhanced for_, or at least I couldn't find a way to. Could've been useful while seeing if the two objects overlap.
## Enunt
__Prb.3.__ Creati o clasa Masina care sa contina urmatoarele campuri:

- Un camp privat de tip String, pentru a indica marca masinii (marca);
- Un camp privat de tip int, pentru a indica anul fabricației (an_fabricatie);
- Un camp privat de tip int, pentru a indica viteza maxima admisa (viteza_maxima);
- Un camp privat informatii_aditionale, care este un masiv de elemente de tip String.
(exemplu lista informatii_aditionale = {“rosie”, “berlina”, “personala”,
“AC_inclus”},
informatii_aditionale = null (in cazul in care nu se specifica informatii aditionale)
*Aceasta lista poate avea un număr diferit de valori.

**Task1.** Initializati cele patru câmpuri ale clasei Masina prin intermediul a doi constructori
(pentru cele două cazuri când sunt sau nu sunt furnizate informațiile_aditionale).

**Task2.** Se creeaza clasa TestPrb cu metoda main() care sa ilustreze constructia unor obiecte de
tip Masina.

**Task3.** Dezvoltati o metoda print() prin care se afiseaza toate informatiile specifice fiecarui
obiect de tip masina. (! Verificati daca in informatiile aditionale, avem informatie != null)

**Task4.** Dezvoltati o metoda check(Masina m) prin care se verifica daca exista informatii
commune între doua obiecte de tip Masina.

**Task5.** Demonstrati in main() functionalitatea celor doua metode.