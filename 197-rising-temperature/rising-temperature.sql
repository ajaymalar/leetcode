# Write your MySQL query statement below
select w.id from Weather w join Weather e on Date_sub(w.recordDate,Interval 1 Day)=e.recordDate where w.temperature > e.temperature;