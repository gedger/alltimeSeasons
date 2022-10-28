## Copyright 2009-2018 Tom Keffer, Matthew Wall
## Distributed under terms of GPLv3.  See LICENSE.txt for your rights.
#errorCatcher Echo

#set $periods = $DisplayOptions.get('periods', ['day', 'week', 'month', 'year'])
#set $plot_groups = $DisplayOptions.get('plot_groups', ['tempdew', 'wind', 'rain'])

## use this span to determine whether there are any data to consider.
#set $recent=$span($day_delta=30, boundary='midnight')


          <div id="history_alltime" class="plot_container" style="display:none">
               <p><b>Minimum Temperature</b></p>
                  $min_temp_table
               <p><b>Average Temperature</b></p>
                  $avg_temp_table
               <p><b>Maximum Temperature</b></p>
                  $max_temp_table
               <p><b>Rainfall (mm)</b></p>
                  $rain_table
               <p><b>Days when rain fell</b></p>
                  $rain_days_table
          </div>

