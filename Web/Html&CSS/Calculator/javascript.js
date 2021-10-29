var num1, num2, varBtn, operation
var text = document.getElementById("text")
var alreadyClick = 0
var alreadyCalc = false

function ChooseAction(varBtn) {
  if (varBtn == 10) {
    text.innerHTML = "0"
    alreadyClick = false
    alreadyClick = 0
  }
  if (alreadyClick == 0) {
    text.innerHTML = varBtn
    num1 = varBtn
    alreadyClick++
  } else if (alreadyClick == 1) {
    if (varBtn == 11) {
      text.innerHTML += " / "
      operation = "/"
    } else if (varBtn == 12) {
      text.innerHTML += " X "
      operation = "X"
    } else if (varBtn == 14) {
      text.innerHTML += " + "
      operation = "+"
    } else if (varBtn == 15) {
      text.innerHTML += " - "
      operation = "-"

    }
    alreadyClick++
  } else if (alreadyClick == 2) {
    text.innerHTML += varBtn
    alreadyClick++
  } else if (alreadyClick == 3) {
    if (varBtn == 13) {
      if (alreadyCalc) {
        switch (operation) {
          case "/": text.innerHTML = num1 / num2
        }
      }
    }




  }
}
/*
10: c
11: /
12: x
13: =
14: +
15 : -
    */
