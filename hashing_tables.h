void create_proc_table();
void insert_proc_to_table(char *);
void print_hash_table();
void insert_vars_to_proc_table(char *var, char *tipo);
void print_var_table(char *proc);
void create_stacks_and_queues();
void insert_id_to_StackO(char *id);
void insert_cte_id_to_StackO(int cte_integer);
void insert_cte_string_to_StackO(int cte_integer);
void insert_cte_decimal_to_StackO(int cte_integer);
void insert_to_StackOper(int oper);
void remove_from_StackOper();
int get_var_virtual_address(char *id);
void reset_temp_vars();
void generate_exp_quadruples();
void generate_add_sust_quadruple();
void generate_mult_div_quadruple();
void generate_exponential_quadruple();
void generate_relational_quadruple();
void create_constants_table();
void create_quadruples_array();
void print_quadruples_array_to_file();
