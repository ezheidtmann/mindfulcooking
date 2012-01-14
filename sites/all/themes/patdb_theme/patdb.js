(function($) {
  Drupal.behaviors.patdbAddMemberExpand = {
    attach: function (context, settings) {

      var block = $('#block-patdb-patdb-add-member', context);
      var title = $("h2", block);


      title.wrapInner('<a></a>');

      title.click(function() {
        $(this).html($(this).text());
        $(".content", block).slideDown(500);
        $('body').animate({
          scrollTop: block.offset().top - $('#toolbar').height()
        }, 500);
      });
    }
  };
})(jQuery);
