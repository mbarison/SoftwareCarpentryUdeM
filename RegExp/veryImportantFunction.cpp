bool veryImportantFunction() {

	bool result = true;

	result &= doAmazingThings("Frodo", 15); 
	doSomethingOrdinary(17,  "Aragorn");
	doSomethingOrdinary(-1,  "Bilbo");
	doSomethingOrdinary(2.7, "Gandalf");
	doSomethingOrdinary(0,   "Galadriel");	
	doSomethingOrdinary(23,  "Gollum");
	doSomethingOrdinary(42,  "Sauron");


	return result;
}