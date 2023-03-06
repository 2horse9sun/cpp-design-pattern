//
// Created by jsjhf on 2023/3/6.
//

#include <algorithm>
#include "Model.h"
#include "View.h"

std::string Model::GetData(){
  return data_;
}

void Model::SetData(std::string data){
  data_ = data;
  this->UpdateViews();
}

void Model::RegisterView(View* view){
  attached_views_.push_back(view);
}

void Model::UnregisterView(View* view){
  attached_views_.erase(std::find(attached_views_.begin(), attached_views_.end(), view));
}

void Model::UpdateViews() {
  for (View* view: attached_views_) {
    view->Update();
  }
}