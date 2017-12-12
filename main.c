if (My_avail_tour_count(my_stack) >= 2) {

Fulfill_request(my_stack);

return false;

          }

Send rejects();



if (!Empty_stack(my_stack)) {

return false;
} else {

if (comm_sz == 1) return true;

Out_of_work();

work request sent = false;

while (1) {

Clear msgs();  /*  Msgs unrelated to work, termination  */

if (No_work_left()) {

return true;  /  No work left.  Quit  /

} else if (!work_request_sent) {

Send_work_request();

work_request_sent = true;

} else {

Check_for_work(&work_request_sent, &work_avail);

if (work_avail) {

Receive_work(my_stack);

return false;

}

}

}

}