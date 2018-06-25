
void List ::middle_Element(){
	Node *low=head;
	Node *fast=head;
	if(head!=NULL){
	while((fast!=NULL)&&(fast->next=NULL)){
		fast=fast->next->next;
		low=low->next;
	}
	cout <<low->info<<" ";
 }
}
