# generated from rosidl_generator_py/resource/_idl.py.em
# with input from juno_interfaces:srv/Categories.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Categories_Request(type):
    """Metaclass of message 'Categories_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('juno_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'juno_interfaces.srv.Categories_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__categories__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__categories__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__categories__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__categories__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__categories__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Categories_Request(metaclass=Metaclass_Categories_Request):
    """Message class 'Categories_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_Categories_Response(type):
    """Metaclass of message 'Categories_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('juno_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'juno_interfaces.srv.Categories_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__categories__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__categories__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__categories__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__categories__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__categories__response

            from juno_interfaces.msg import Category
            if Category.__class__._TYPE_SUPPORT is None:
                Category.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Categories_Response(metaclass=Metaclass_Categories_Response):
    """Message class 'Categories_Response'."""

    __slots__ = [
        '_categories',
    ]

    _fields_and_field_types = {
        'categories': 'sequence<juno_interfaces/Category>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['juno_interfaces', 'msg'], 'Category')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.categories = kwargs.get('categories', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.categories != other.categories:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def categories(self):
        """Message field 'categories'."""
        return self._categories

    @categories.setter
    def categories(self, value):
        if __debug__:
            from juno_interfaces.msg import Category
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Category) for v in value) and
                 True), \
                "The 'categories' field must be a set or sequence and each value of type 'Category'"
        self._categories = value


class Metaclass_Categories(type):
    """Metaclass of service 'Categories'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('juno_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'juno_interfaces.srv.Categories')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__categories

            from juno_interfaces.srv import _categories
            if _categories.Metaclass_Categories_Request._TYPE_SUPPORT is None:
                _categories.Metaclass_Categories_Request.__import_type_support__()
            if _categories.Metaclass_Categories_Response._TYPE_SUPPORT is None:
                _categories.Metaclass_Categories_Response.__import_type_support__()


class Categories(metaclass=Metaclass_Categories):
    from juno_interfaces.srv._categories import Categories_Request as Request
    from juno_interfaces.srv._categories import Categories_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
