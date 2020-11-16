#pragma once

// Declare functions here

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// General functions
void simulate_CDC6600(int inst_count);
void create_blank_table(vector<string> instructions_v);
void output_table(vector<int> inst_word, vector<string> inst_sem, vector<string> inst_sem2, vector<string> inst_len, vector<int> issue, vector<int> start, vector<int> result, vector<int> unit_ready, vector<string> fetch, vector<string> store, vector<string> functional_unit_used, vector<string> registers_used, int rows_solved);
unsigned long to_octal(unsigned long binary_num);
string get_unique_registers(string dest, string op1, string op2);

bool check_foc(int inst_num);
bool check_foc2(int inst_num);
bool check_soc(int inst_num);
bool check_toc(int inst_num);

vector<bool> get_indiv_fu(int inst_num);
int get_result_execution_time(int inst_num);
int get_result_segment_time(int inst_num);

bool check_store_op(int inst_num);
bool check_fetch_op(int inst_num);

void reserve_units(int inst_num);
void check_func_unit_complete(int inst_num, int curr_clock);
void clear_func_unit(int inst_num);

int resolve_foc_conflict(int inst_num);
int resolve_foc2_conflict(int inst_num);

int resolve_soc_conflict(int inst_num);

int resolve_toc_conflict(int inst_num);

// functional units
void BRANCH(int Opcode, string inst);
void BOOLEAN(int Opcode, string inst); 
void SHIFT(int Opcode, string inst); 
void ADD(int Opcode, string inst); 
void LONG_ADD(int Opcode, string inst);
void DIVIDE(int Opcode, string inst); 
void MULTIPLY(int Opcode, string inst); 
void INCREMENT(int Opcode, string inst); 

