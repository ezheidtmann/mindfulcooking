(function ($) {

  Drupal.behaviors.mc_units = {
    attach: function (context, settings) {
      //$(".mc-units-known .mc-units-original-text").tooltip({offset: [0, -10], position: 'center left', relative: true});
      $(".mc-units-ingredient-list").prepend('<div class="mc-units-ops"><span></span> <a class="mc-units-toggle"></a><div class="mc-units-disclaimer"></div></div>');
      $(".mc-units-ops").append('<div class="mc-units-disclaimer">Unit conversions are done automatically, so there may be errors. Furthermore, the computer cannot currently translate from volume measurements to weight measurements, as is customary for dry ingredients in metric-unit recipes. Please cook with care, and let us know how we can make our computer smarter!</div>');
      mc_units_ops_toggle();
      $(".mc-units-toggle").click(function(e){
        $('.mc-units-known .mc-units-system-metric').toggle();
        $('.mc-units-known .mc-units-original-text').toggle();
        mc_units_ops_toggle();
      });
    }
  };

  /* Update the .mc-units-ops line after a system toggle */
  function mc_units_ops_toggle() {
    var span = $('.mc-units-ops span');
    var a = $('.mc-units-ops a');
    var active_unit = span.data('active_unit');
    if (active_unit == 'original') {
      span.html('Showing metric.');
      a.html('Show original units');
      active_unit = 'metric';
      $(".mc-units-disclaimer").show();
    }
    else if (active_unit == 'metric' || active_unit == undefined) {
      span.html('Showing original units.');
      a.html('Show metric');
      active_unit = 'original';
    }
    span.data('active_unit', active_unit);
  }

})(jQuery);
