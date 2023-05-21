#include "space_age.h"

namespace space_age {
    space_age::space_age(long seconds) : seconds_(seconds) {}

    long space_age::seconds() const
    {
        return seconds_;
    }

    double space_age::on_earth() const
    {
        double res = (seconds_ * 1) / 31557600.0;
        return res;
    }

    double space_age::on_mercury() const
    {
        double res = (seconds_ ) / (0.2408467 * 31557600.0);
        return res;
    }

    double space_age::on_venus() const
    {
        double res = (seconds_ ) / (0.61519726 * 31557600.0);
        return res;
    }

    double space_age::on_mars() const
    {
        double res = (seconds_ ) / (1.8808158 * 31557600.0);
        return res;
    }

    double space_age::on_jupiter() const
    {
        double res = (seconds_ ) / (11.862615 * 31557600.0);
        return res;
    }

    double space_age::on_saturn() const
    {
        double res = (seconds_ ) / (29.447498 * 31557600.0);
        return res;
    }

    double space_age::on_uranus() const
    {
        double res = (seconds_ ) / (84.016846 * 31557600.0);
        return res;
    }

    double space_age::on_neptune() const
    {
        double res = (seconds_ ) / (164.79132 * 31557600.0);
        return res;
    }

}  // namespace space_age
