save:
	@echo "Subiendo cambios..."
	@git add .
	@git commit -m "Problemas" || true
	@git push
	@clear
	@echo "Todo listo y subido a GitHub!"

pull:
	@echo "Haciendo pull..."
	@git pull
	@clear
	@echo "Pull hecho!"

.PHONY: pull save