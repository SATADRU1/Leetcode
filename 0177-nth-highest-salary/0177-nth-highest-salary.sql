CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      # Write your MySQL query statement below.

        with abc_table as(
        select *, dense_rank() over (order by salary desc) as rnk
        from Employee)

        select distinct ifnull(salary, null)
        from abc_table
        where rnk = N
  );
END