#include "nemu.h"
#include "cpu/reg.h"
#include "memory/memory.h"

#include <stdlib.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <sys/types.h>
#include <regex.h>

/********************we use cpu.c to read cpu.eax or reg***********************/
#include"cpu/cpu.h"
#include"monitor/readMyelf.h"
enum {
	NOTYPE = 256, EQ=257,
	NUM=258,HEX=259,DEREF=260,
	NEQ=261,REG=262,EBS=263,NEG=264,FUNC=265
	/* TODO: Add more token types */

};

static struct rule {
	char *regex;
	int token_type;
} rules[] = {

	/* TODO: Add more rules.
	 * Pay attention to the precedence level of different rules.
	 */
	//////////////////////////////////
	{"\\$e[a-d]x",REG},
	{"\\$e[sb]p",EBS},
	{"\\(",'('},
	{"\\)",')'},
	{"0[Xx][0-9a-fA-F]+",HEX},
	{"[0-9]+",NUM},
	{"\\-",'-'},
	{"\\*",'*'},
	{"\\/",'/'},
	{"!=",NEQ},
	{"!",'!'},
	//////////////////////////////////
	{" +",	NOTYPE},				// white space
	{"\\+", '+'},
	{"==", EQ},
	{"[0-9a-zA-Z]+",FUNC}
};

#define NR_REGEX (sizeof(rules) / sizeof(rules[0]) )

static regex_t re[NR_REGEX];

/* Rules are used for more times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
	int i;
	char error_msg[128];
	int ret;

	for(i = 0; i < NR_REGEX; i ++) {
		ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
		if(ret != 0) {
			regerror(ret, &re[i], error_msg, 128);
			assert(ret != 0);
		}
	}
}

typedef struct token {
	int type;
	char str[32];
} Token;

Token tokens[32];
int nr_token;

static bool make_token(char *e) {
	int position = 0;
	int i;
	regmatch_t pmatch;
	
	nr_token = 0;

	while(e[position] != '\0') {
		/* Try all rules one by one. */
		for(i = 0; i < NR_REGEX; i ++) {
			if(regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
				char *substr_start = e + position;
				int substr_len = pmatch.rm_eo;

				printf("match regex[%d] at position %d with len %d: %.*s", i, position, substr_len, substr_len, substr_start);
				position += substr_len;

				/* TODO: Now a new token is recognized with rules[i]. 
				 * Add codes to perform some actions with this token.
				 */


				switch(rules[i].token_type) {

					//************add more operation********
					case NOTYPE:	;break;
					case '+':{tokens[nr_token].type=rules[i].token_type;
							 //tokens[nr_token].str=rules[i].regex;
							 nr_token++;

						 };break;
					case '-':{tokens[nr_token].type=rules[i].token_type;
							 //tokens[nr_token].str=rules[i].regex;
							 nr_token++;
						 };break;
					case '*':{tokens[nr_token].type=rules[i].token_type;
							// tokens[nr_token].str=rules[i].regex;
							 nr_token++;
						 };break;
					case '/':{tokens[nr_token].type=rules[i].token_type;
							 //tokens[nr_token].str=rules[i].regex;
							 nr_token++;
						 };break;
					case NUM:{tokens[nr_token].type=rules[i].token_type;
							 for(int k=0;k<substr_len;k++)
								 tokens[nr_token].str[k]=substr_start[k];
							 tokens[nr_token].str[substr_len]='\0';
							 nr_token++;
						 };break;
					case HEX:{tokens[nr_token].type=rules[i].token_type;
							 for(int k=0;k<substr_len;k++)
								 tokens[nr_token].str[k]=substr_start[k];
							 tokens[nr_token].str[substr_len]='\0';
							 nr_token++;
						 };break;
					case NEQ:{tokens[nr_token].type=rules[i].token_type;
							 //tokens[nr_token].str=rules[i].regex;
							 nr_token++;
						 };break;
					case '!':{tokens[nr_token].type=rules[i].token_type;
							 //tokens[nr_token].str=rules[i].regex;
							 nr_token++;
						 };break;
					case REG:{tokens[nr_token].type=rules[i].token_type;
							 for(int k=0;k<substr_len;k++)
								 tokens[nr_token].str[k]=substr_start[k];
							 tokens[nr_token].str[substr_len]='\0';
							 nr_token++;
						 };break;
					case EBS:{tokens[nr_token].type=rules[i].token_type;
							 for(int k=0;k<substr_len;k++)
								 tokens[nr_token].str[k]=substr_start[k];
							 tokens[nr_token].str[substr_len]='\0';
							 nr_token++;
						 };break;
					case FUNC:{tokens[nr_token].type=rules[i].token_type;
							 for(int k=0;k<substr_len;k++)
								 tokens[nr_token].str[k]=substr_start[k];
							 tokens[nr_token].str[substr_len]='\0';
							 nr_token++;
						 };break;
					//***************************************
					default: tokens[nr_token].type = rules[i].token_type;
							 nr_token ++;
				}

				break;
			}
		}

		if(i == NR_REGEX) {
			printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
			return false;
		}
	}

	return true; 
}


bool check_parenthese(int begin,int end , int* mat)
{
	bool match=true;
	//printf("\n begin=%d,end=%d",begin,end);
	if((end-begin) <2)
		return false;
	if(tokens[begin].type=='('&&tokens[end].type==')')
	{	
		match=false;
		for(int i=begin+1;i<end-1;i++)
		{
			if(tokens[i].type=='('||tokens[i].type==')')
			{
				match=!match;
			}
		}
		//printf("\nhi!  match=%d\n",match);
		match=!match;
		if(match==true)
		{
			//printf("\n woo\n");
			return true;
		}
		else
		{
			//printf("\n woo \n");
			*mat=2;
			return true;
		}
	}
	else
		return false;
}

int find_dominent(int begin ,int end)
{
	int symbol[8]={'+','-','*','/',NEQ,EQ,NUM,HEX};
	int chart[8][8]={
		//'+','-','*','/',NEQ,EQ,NEG,DEREF
/*'+' new one*/	{1,1,1,1,0,0,1,1},
/*'-' new one*/	{1,1,1,1,0,0,1,1},
/*'*' new one*/	{0,0,1,1,0,0,1,1},
/*'/' new one*/	{0,0,1,1,0,0,1,1},
/*"!=" newone*/	{1,1,1,1,1,1,1,1},
/*"EQ" newone*/	{1,1,1,1,1,1,1,1},
/*NEG newone*/	{0,0,0,0,0,0,0,0},
/*DEREFnewone*/	{0,0,0,0,0,0,0,0}};
	int high=7;
	int domi=0;
	for(int i=begin;i<=end;i++)
	{
		if(tokens[i].type=='(')
		{
			int co=1;
			i++;
			for(;co!=0;i++)
			{
				if(i>end)
					break;
				else if(tokens[i].type=='(')
					co++;
				else if(tokens[i].type==')')
					co--;
			}
			//printf("\n i=%d \n",i);
			i--;
			continue;
		}
		int now=8;
		for(int j=0;j<8;j++)
		{
			if(symbol[j]==tokens[i].type)
			{
				now=j;
				//printf("\ntype=%d,now=%d\n",tokens[i].type,now);
				break;
			}
		}
		if(now==8)
			;
		else if(chart[now][high]==1)
		{
			high=now;
			domi=i;
			//printf("\n domi=%d\n",domi);
		}
		//printf("\n i=%d\n",i);	

	}
	//printf("\n final_domi=%d\n",domi);
	return domi;
}


uint32_t eval(int start,int end){
	int* mat=(int*)malloc(sizeof(int));
	*mat=0;
	if(start>end){
		printf("something wrong !!!\n");
		assert (0);
		return 0;
	}
	else if(start==end){
		uint32_t result =0;
		int len=strlen(tokens[start].str);
		//printf("\nlen=%d\n",len);
		int tens=1;
		if(tokens[start].type==NUM)
		{
			for(int i=len-1;i>=0;i--)
			{
				result+=(tens*(tokens[start].str[i]-'0'));
				tens*=10;
				//printf("\nresult=%d\n",result);
			}
			
		}
		else if (tokens[start].type==REG)
		{
			result=0;
			switch(tokens[start].str[1])
			{
				case 'a':result=cpu.eax;break;
				case 'b':result=cpu.ebx;break;
				case 'c':result=cpu.ecx;break;
				case 'd':result=cpu.edx;break;
			}
		}
		else if(tokens[start].type==EBS)
		{
			result=0;
			switch(tokens[start].str[1])
			{
				case 's':result=cpu.esp;break;
				case 'b':result=cpu.ebp;break;
			}
		}
		else if(tokens[start].type==FUNC)
		{
			bool* succ=(bool*)malloc(sizeof(bool));
			char*sym=&tokens[start].str[0];
			uint32_t temp_re=look_up_symtab(sym,succ);
			if(succ)
				result=temp_re;
			else
				result=0;
		}
		else
		{
			for(int i=len-1;i>=2;i--)
			{
				if(tokens[start].str[i]>='a')//a-z
					result+=(tens*((tokens[start].str[i]-'a')+10));
				else if(tokens[start].str[i]>='A')//A-z
					result+=(tens*((tokens[start].str[i]-'A')+10));
				else
					result+=(tens*(tokens[start].str[i]-'0'));//0-9
				tens*=16;
			}
		}
		return result;
	}
	else if(check_parenthese(start,end,mat))//if right then 1,is wrong 0,if not match 2
	{
		//printf("inside \n");
		//printf("\n mat=%d",*mat);
		if((*mat)==2)
		{
			printf("parentheses are not match\n");
			return 0;
		}
		else
			return eval(start+1,end-1);
	}
	else
	{
		//printf("\nextra\n");
		if(tokens[start].type=='!')//single operation
		{
			uint32_t temp=eval(start+1,end);
			return !temp;
		}
		else if(tokens[start].type==NEG)//NEG number
		{
			uint32_t temp=eval(start+1,end);
			return -temp;
		}
		else if(tokens[start].type==DEREF)//POINTER
		{
			uint32_t temp=eval(start+1,end);
			return vaddr_read(temp,SREG_DS,4); 
		}

		//not single operation
		int op=find_dominent(start,end);
		if(op==start||op==end)
		{
			printf("wrong input \n");
			return 0;
		}
		uint32_t val1=eval(start,op-1);
		uint32_t val2=eval(op+1,end);
		//printf("\n val1=%d,val2=%d",val1,val2);
		switch (tokens[op].type)
		{
		case '+':return val1+val2;
		case '-':return val1-val2;
		case '*':return val1*val2;
		case '/':return val1/val2;
		case EQ:return val1==val2;
		case NEQ:return val1!=val2;
		default :{printf("dominent wrong!and the op=%s ,\n",tokens[op].str);assert(0);};
		}
	}	
}

uint32_t expr(char *e, bool *success) {
	if(!make_token(e)) {
		*success = false;
		return 0;
	}
	//**********************
	//printf("\nPlease implement expr at expr.c\n");
	//assert(0);
	*success=true;
	printf("\n nr_token=%d\n",nr_token);
	for(int i=0;i<nr_token;i++){
		if(tokens[i].type=='*'&&(i==0||(tokens[i-1].type!=HEX&&tokens[i-1].type!=NUM&&tokens[i-1].type!=')')))
			tokens[i].type=DEREF;
		else if(tokens[i].type=='-'&&(i==0||(tokens[i-1].type!=HEX&&tokens[i-1].type!=NUM&&tokens[i-1].type!=')')))
			tokens[i].type=NEG;
	}

	return eval(0,nr_token-1);
	//*********************
	//return 0;
}

