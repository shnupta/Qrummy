var qreader = require('Qreader');
var Observable = require('FuseJS/Observable');
var InterApp = require('FuseJS/InterApp');
var txt = Observable();

function load () {
  qreader.scan().then(function (res) {
    txt.value = res;
  });
}

function launchweb() {
  InterApp.launchUri(txt.value);
}

module.exports = {
  load: load,
  txt: txt,
  launchweb: launchweb
}
