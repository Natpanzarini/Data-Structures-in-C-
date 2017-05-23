#pragma once


class Robot {

  public:
    virtual ~Robot() {}

    virtual int charge_remaining() const = 0;
};

