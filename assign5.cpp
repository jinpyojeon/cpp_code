
Neighborhood::overallprice() {
	int i = 0;
	int sum = 0; 
	for (i = 0; i < coll.size(); i++) { // Note how you can refer to coll  
		sum += coll[i];
	}
	return sum;
}
