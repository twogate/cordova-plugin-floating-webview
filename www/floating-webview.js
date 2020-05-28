var exec = require('cordova/exec');

exports.show = function(arg0, success, error) {
  exec(success, error, "FloatingWebview", "show", [arg0]);
};

exports.hide = function(arg0, success, error) {
  exec(success, error, "FloatingWebview", "hide", [arg0]);
};
