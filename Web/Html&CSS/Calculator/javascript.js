

function ChooseAction(num) {
  var text = document.getElementById("text")
  text.innerHTML+=num
  }
   function clean (){
    document.getElementById("text").innerHTML=""
   }

   function calculate(){
    var text = document.getElementById("text").innerHTML
    if(text){
     document.getElementById("text").innerHTML = eval(text)
    }
    }
