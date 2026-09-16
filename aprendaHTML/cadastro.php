<?php
	$nome = $_POST['nome'];
	$email = $_POST['email'];
	$idade = $_POST['idade'];
	$curso = $_POST['curso'];
	$turno = $_POST['turno'];

	
if (empty($nome) || empty($email) || empty($idade) || 
empty($curso) || empty($turno)){
	echo "Preenche todos os campos obrigatórios.";
	exit;
}	

echo "<h1>Aluno cadastrado com sucesso!</h1>";


echo "<p><strong>Nome:</strong> $nome</p>";
echo "<p><strong>E-mail:</strong> $email</p>";
echo "<p><strong>Idade:</strong> $idade</p>";
echo "<p><strong>Curso:</strong> $curso</p>";
echo "<p><strong>Turno:</strong> $turno</p>";
