var qreader = require('Qreader');
var Observable = require('FuseJS/Observable');
var InterApp = require('FuseJS/InterApp');
var txt = Observable();
var showload = Observable(false);

function load () {
  qreader.scan().then(function (res) {
    txt.value = res;
    showload.value = true;
  });
}

function launchweb() {
  InterApp.launchUri(txt.value);
}

module.exports = {
  load: load,
  txt: txt,
  launchweb: launchweb,
  showload: showload
}
