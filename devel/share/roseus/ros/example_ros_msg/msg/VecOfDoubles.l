;; Auto-generated. Do not edit!


(when (boundp 'example_ros_msg::VecOfDoubles)
  (if (not (find-package "EXAMPLE_ROS_MSG"))
    (make-package "EXAMPLE_ROS_MSG"))
  (shadow 'VecOfDoubles (find-package "EXAMPLE_ROS_MSG")))
(unless (find-package "EXAMPLE_ROS_MSG::VECOFDOUBLES")
  (make-package "EXAMPLE_ROS_MSG::VECOFDOUBLES"))

(in-package "ROS")
;;//! \htmlinclude VecOfDoubles.msg.html


(defclass example_ros_msg::VecOfDoubles
  :super ros::object
  :slots (_dbl_vec ))

(defmethod example_ros_msg::VecOfDoubles
  (:init
   (&key
    ((:dbl_vec __dbl_vec) (make-array 0 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _dbl_vec __dbl_vec)
   self)
  (:dbl_vec
   (&optional __dbl_vec)
   (if __dbl_vec (setq _dbl_vec __dbl_vec)) _dbl_vec)
  (:serialization-length
   ()
   (+
    ;; float64[] _dbl_vec
    (* 8    (length _dbl_vec)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64[] _dbl_vec
     (write-long (length _dbl_vec) s)
     (dotimes (i (length _dbl_vec))
       (sys::poke (elt _dbl_vec i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64[] _dbl_vec
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _dbl_vec (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _dbl_vec i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;;
   self)
  )

(setf (get example_ros_msg::VecOfDoubles :md5sum-) "e9ddfb3c374c7aa1ad63fcedb2691ab2")
(setf (get example_ros_msg::VecOfDoubles :datatype-) "example_ros_msg/VecOfDoubles")
(setf (get example_ros_msg::VecOfDoubles :definition-)
      "float64[] dbl_vec
")



(provide :example_ros_msg/VecOfDoubles "e9ddfb3c374c7aa1ad63fcedb2691ab2")


