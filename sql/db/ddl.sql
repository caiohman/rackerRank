create table if not exists station (
    id decimal(3),
    city varchar(21),
    state varchar(2),
    lat_n decimal(8,6),
    long_w decimal(9,6)
)