#pragma once
ref class node
{
public:
	System::String^ name;
	System::String^ phone_num;
	System::String^ age;
	System::String^ room_num;
	System::String^ gender;
	System::String^ disease;
	System::String^ id_number;
	System::String^ date;
	node^ next;
};
ref class Patient_list
{
private:
	node^ head;
	node^ temp;
public:
	Patient_list() // This is a constructor to set value for head pointers .
	{
		head = nullptr;
		temp = nullptr;
	}

	bool is_empty()//This function has used to check if the list is empty or not empty /
	{
		return head == nullptr;
	}

	//function to add a new node to the list 
	bool add(System::String^ n, System::String^ ag, System::String^ ph, System::String^ room, System::String^ gn, System::String^ dis, System::String^ id, System::String^ dt)
	{
		if (!search(id)) // check if the id is already exist
		{
			node^ newnode = gcnew node;
			newnode->name = n;
			newnode->phone_num = ph;
			newnode->room_num = room;
			newnode->age = ag;
			newnode->gender = gn;
			newnode->disease = dis;
			newnode->id_number = id;
			newnode->date = dt;
			if (is_empty())
			{
				head = newnode;
				newnode->next = nullptr;
			}
			else
			{
				node^ temp = head;
				while (temp->next != nullptr)
				{
					temp = temp->next;
				}
				temp->next = newnode;
				newnode->next = nullptr;
			}
			return true;
		}
		else
			return false;
	}

	//search if the name belongs to any node of the list
	bool search(System::String^ id)
	{
		temp = head;
		bool f = false;
		while (temp != nullptr)
		{
			if (temp->id_number == id)
				return f = true;
			temp = temp->next;
		}
		return f;
	}

	//change any value of the data in an existed node
	void update(System::String^ n, System::String^ ag, System::String^ ph, System::String^ room, System::String^ gn, System::String^ dis, System::String^ id)
	{
		if (search(id))
		{
			temp->name = n;
			temp->age = ag;
			temp->phone_num = ph;
			temp->room_num = room;
			temp->gender = gn;
			temp->disease = dis;
			temp->id_number = id;
		}
	}

	//return the name of the node you want
	System::String^ ret_name(System::String^ id)
	{
		if (search(id))
			return temp->name;
	}

	//return the phone number of the node you want
	System::String^ ret_phone(System::String^ id)
	{
		if (search(id))
			return temp->phone_num;
	}

	//return the age of the patient in the node
	System::String^ ret_age(System::String^ id)
	{
		if (search(id))
			return temp->age;
	}

	//return  patient's room number 
	System::String^ ret_room(System::String^ id)
	{
		if (search(id))
			return temp->room_num;
	}

	//return the gender of the patient in the node 
	System::String^ ret_gender(System::String^ id)
	{
		if (search(id))
			return temp->gender;
	}


	//return the disease of the patient in the node 
	System::String^ ret_disease(System::String^ id)
	{
		if (search(id))
			return temp->disease;
	}


	//return the id number of the patient in the node 
	System::String^ ret_id(System::String^ id)
	{
		if (search(id))
			return temp->id_number;
	}


	//return the date of registration of the patient in the node 
	System::String^ ret_date(System::String^ id)
	{
		if (search(id))
			return temp->date;
	}


	//delete an existed node from patient_list
	void delet(System::String^ id)
	{
		if (!is_empty())
		{
			node^ current = head;
			if (head->id_number == id)
			{
				head = head->next;
				delete current;
			}
			else
			{
				node^ previous = head->next;
				while (current->id_number != id)
				{
					previous = current;
					current = current->next;
					if (current == nullptr)
						return;
				}
				previous->next = current->next;
				delete current;
			}
		}
	}
};