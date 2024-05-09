document.addEventListener('DOMContentloaded', function(){
     document.querySelector('form').addEventListener('submit',function(event) {
          let name = document.querySelector('#name').value;
          alert('hello, ' + name);
          event.preventDeault();
      });
});


