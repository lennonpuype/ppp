//imr
import React from "react";

//sfc
const ChannelValue = ({ value, max }) => {
  return (
    <label>
      {value} - {Math.round((value / max) * 100)}%
    </label>
  );
};

export default ChannelValue;
