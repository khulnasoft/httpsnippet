const settings = {
  async: true,
  crossDomain: true,
  url: 'http://mockbin.com/har?foo[bar]=baz,zap&fiz=buz&key=value',
  method: 'GET',
  headers: {}
};

$.ajax(settings).done(function (response) {
  console.log(response);
});