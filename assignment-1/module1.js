function greetUser() {
    var userName = prompt('What is your name?');
    var greeting = 'Hello, ' + (userName || 'stranger') + '! Welcome to our website.';
    alert(greeting);
  }