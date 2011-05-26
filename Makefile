OBJECTS=object.o list.o number.o quote.o boolean.o str.o symbol.o procedure.o environment.o evaluator.o nil.o builtin_procedure.o

MAIN=main.o

resoup: $(OBJECTS) $(MAIN)
	g++ -o $@ $(MAIN) $(OBJECTS)
%.o: %.cpp %.h
	g++ -c -o $@ $< 
%.o: %.c
	gcc -c -o $@ $<
clean:
	rm resoup $(OBJECTS) $(MAIN)
