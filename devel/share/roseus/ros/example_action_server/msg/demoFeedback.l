;; Auto-generated. Do not edit!


(when (boundp 'example_action_server::demoFeedback)
  (if (not (find-package "EXAMPLE_ACTION_SERVER"))
    (make-package "EXAMPLE_ACTION_SERVER"))
  (shadow 'demoFeedback (find-package "EXAMPLE_ACTION_SERVER")))
(unless (find-package "EXAMPLE_ACTION_SERVER::DEMOFEEDBACK")
  (make-package "EXAMPLE_ACTION_SERVER::DEMOFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude demoFeedback.msg.html


(defclass example_action_server::demoFeedback
  :super ros::object
  :slots (_fdbk ))

(defmethod example_action_server::demoFeedback
  (:init
   (&key
    ((:fdbk __fdbk) 0)
    )
   (send-super :init)
   (setq _fdbk (round __fdbk))
   self)
  (:fdbk
   (&optional __fdbk)
   (if __fdbk (setq _fdbk __fdbk)) _fdbk)
  (:serialization-length
   ()
   (+
    ;; int32 _fdbk
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _fdbk
       (write-long _fdbk s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _fdbk
     (setq _fdbk (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get example_action_server::demoFeedback :md5sum-) "46cc8f8da6ebf35aedc6bad2e96b2e59")
(setf (get example_action_server::demoFeedback :datatype-) "example_action_server/demoFeedback")
(setf (get example_action_server::demoFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
int32 fdbk

")



(provide :example_action_server/demoFeedback "46cc8f8da6ebf35aedc6bad2e96b2e59")


