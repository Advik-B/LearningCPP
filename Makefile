All:
	@echo "----------Building project:[ SomeTextStuff - Debug ]----------"
	@cd "SomeTextStuff" && $(MAKE) /nologo /f  "SomeTextStuff.mk"
clean:
	@echo "----------Cleaning project:[ SomeTextStuff - Debug ]----------"
	@cd "SomeTextStuff" && $(MAKE) /nologo /f  "SomeTextStuff.mk" clean
.PHONY: clean All

