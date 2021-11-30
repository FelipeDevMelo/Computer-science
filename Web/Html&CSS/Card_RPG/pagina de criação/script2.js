function Submit(){
var selectRaca = document.getElementById('raçaInput');
var valueRaca = selectRaca.options[selectRaca.selectedIndex].value;
var selectClasse = document.getElementById('classeInput');
var valueClasse = selectClasse.options[selectClasse.selectedIndex].value;
window.alert("raça:  "+valueRaca+"   Classe: "+valueClasse); // en
}