function out = pcg_solve_precondition(L, x)
out = dev_solve_LTv(L, dev_solve_Lv(L, x));
end