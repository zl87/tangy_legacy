#include <string>
#include <database_interface/db_class.h>

class trivia_question : public database_interface::DBClass
{
public:
	database_interface::DBField<int> trivia_id_;
	database_interface::DBField<std::string> category_;
	database_interface::DBField<std::string> ques_;
	database_interface::DBField<std::string> ans_;
	database_interface::DBField<std::string> alt1_;
	database_interface::DBField<std::string> alt2_;
	database_interface::DBField<std::string> alt3_;

	trivia_question() :
		trivia_id_(database_interface::DBFieldBase::TEXT,
			this, "trivia_id", "trivia_question",true),
		category_(database_interface::DBFieldBase::TEXT,
			this, "category", "trivia_question",true),
		ques_(database_interface::DBFieldBase::TEXT,
			this, "ques", "trivia_question",true),
		ans_(database_interface::DBFieldBase::TEXT,
			this, "ans", "trivia_question",true),
		alt1_(database_interface::DBFieldBase::TEXT,
			this, "alt1", "trivia_question",true),
		alt2_(database_interface::DBFieldBase::TEXT,
			this, "alt2", "trivia_question",true),
		alt3_(database_interface::DBFieldBase::TEXT,
			this, "alt3", "trivia_question",true)
		{
			primary_key_field_=&trivia_id_;

			fields_.push_back(&category_);
			fields_.push_back(&ques_);
			fields_.push_back(&ans_);
			fields_.push_back(&alt1_);
			fields_.push_back(&alt2_);
			fields_.push_back(&alt3_);

			setAllFieldsReadFromDatabase(true);
			setAllFieldsWriteToDatabase(true);
		}

};
