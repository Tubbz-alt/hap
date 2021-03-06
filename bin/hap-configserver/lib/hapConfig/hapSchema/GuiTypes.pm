package hapConfig::hapSchema::GuiTypes;

use strict;
use warnings;

use base 'DBIx::Class';

__PACKAGE__->load_components("Core");
__PACKAGE__->table("gui_types");
__PACKAGE__->add_columns(
  "id",
  { data_type => "INT", default_value => undef, is_nullable => 0, size => 11 },
  "name",
  {
    data_type => "VARCHAR",
    default_value => undef,
    is_nullable => 1,
    size => 64,
  },
  "type",
  {
    data_type => "VARCHAR",
    default_value => undef,
    is_nullable => 1,
    size => 32,
  },
  "description",
  {
    data_type => "MEDIUMTEXT",
    default_value => undef,
    is_nullable => 1,
    size => 16777215,
  },
  "display",
  {
    data_type => "VARCHAR",
    default_value => "{}",
    is_nullable => 1,
    size => 255,
  },
);
__PACKAGE__->set_primary_key("id");


# Created by DBIx::Class::Schema::Loader v0.04006 @ 2013-03-08 13:40:16
# DO NOT MODIFY THIS OR ANYTHING ABOVE! md5sum:lpULDXfZP8N+qazpOPT1dw


# You can replace this text with custom content, and it will be preserved on regeneration
1;
