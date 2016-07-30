#include <stdio.h>
#define MaxSize 100
typedef int DataType;
typedef struct SeqList{
    DataType seqlist[MaxSize];
	int size;
};
//初始化顺序表
void Initial(SeqList *seq){
    seq->size = 0;
} 
//取得顺序表的长度
int GetLength(SeqList seq){
	return seq.size;
}
//顺序表的插入操作
int Insert(SeqList *seq,int index,DataType temp){
	if(seq->size >= MaxSize || index<0 || index>seq->size){
		return 0;
	}else{
		for(int i= seq->size;i>index;i--){
			seq->seqList[i+1] = seq->seqList[i];
		}
		seq->seqList[index] = temp;
		seq->size++;
		return 1;
	}
}
//顺序表的删除操作(根据序号删除)
int Delete_Index(SeqList *seq,int index){
	if(index<0 || index>seq->size-1){
		return 0;
	}else{
		for(int i=index;i<seq->size-1;i++){
			seq->seqList[i] = seq->seqList[i+1];
		}
		seq->size--;
		return 1;
	}
}
//顺序表的删除操作(根据具体的数)
int Delete_Num(SeqList *seq,DateType num){
	if(seq->seq.size <= 0){
		return 0;
	}
	for(int i=0;i<seq->size-1;i++){
		if(num == seq->seqList[i]){
             Delete_Index(seq,i);
			 return 1;
		}
	}
	return 0;
}
//顺序表的读取操作
int GetNum(SeqList seq,int index,DataType *num){
	if(index<0 || index>seq.size-1){
        return 0;
	}else{
		*num = seq.seqList[index];
		return 1;
	}
}
void main(){
	SeqList seq;
	Initial(&seq);
}
