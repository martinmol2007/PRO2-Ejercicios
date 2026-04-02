save:
	@echo "Subiendo cambios..."
	@git add .
	@git commit -m "Cambios" || true
	@git push
	@clear
	@echo "Todo listo y subido a GitHub!"

pull:
	@echo "Haciendo pull..."
	@git pull
	@clear
	@echo "Pull hecho!"

readme:
	@echo "Guardando cambios de README.md"
	@git add README.md
	@git commit -m "README"
	@git push
	@clear
	@echo "README Guardado en GitHub"

.PHONY: pull save readme