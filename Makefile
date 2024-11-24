lab_2cp:
	@clear
	@echo "Compiling lab_2/lab_2.cpp"
	g++ lab_2/lab_2.cpp -o main && ./main
	@echo "Running lab_2 python"
	python3 lab_2/lab_2.py
