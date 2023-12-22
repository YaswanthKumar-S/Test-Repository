function calculateFactorial() {
   
    var numberInput = document.getElementById('numberInput').value;
    
   
    if (isNaN(numberInput) || numberInput < 0) {
      alert('Please enter a non-negative number.');
      return;
    }
  
    
    var result = factorial(parseInt(numberInput));
  
   
    document.getElementById('result').innerHTML = 'Factorial: ' + result;
  }
  
  function factorial(n) {
    if (n === 0 || n === 1) {
      return 1;
    } else {
      return n * factorial(n - 1);
    }
  }
  