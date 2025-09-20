# Write your MySQL query statement below
SELECT stock_name,
(select SUM(price) FROM stocks s2 WHERE s2.stock_name=s1.stock_name AND operation='Sell' GROUP BY stock_name)
-(select SUM(price) FROM stocks s3 WHERE s3.stock_name=s1.stock_name AND operation='Buy' GROUP BY stock_name) AS capital_gain_loss 
FROM stocks s1
GROUP BY stock_name;