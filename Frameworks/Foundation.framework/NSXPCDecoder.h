/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSXPCDecoder : NSXPCCoder {
    long long  _allowedClassesIndex;
    id  _allowedClassesList;
    unsigned int  _collectionPointer;
    struct { /* ? */ } * _collections;
    NSXPCConnection * _connection;
    struct { 
        char *data; 
        unsigned long long dataLen; 
        struct __CFString {} *tempString; 
    }  _decoder;
    unsigned long long  _genericIndex;
    NSObject<OS_xpc_object> * _oolObjects;
    struct { 
        unsigned long long offset; 
        int type; 
    }  _rootObject;
}

@property NSXPCConnection *_connection;

- (int)__decodeXPCObject:(id)arg1 allowingSimpleMessageSend:(bool)arg2 outInvocation:(id*)arg3 outArguments:(id*)arg4 outArgumentsMaxCount:(unsigned long long)arg5 outMethodSignature:(id*)arg6 outSelector:(SEL*)arg7 isReply:(bool)arg8 replySelector:(SEL)arg9 interface:(id)arg10;
- (id)_connection;
- (id)_decodeArrayOfObjectsForKey:(id)arg1;
- (const char *)_decodeCStringForKey:(id)arg1;
- (int)_decodeMessageFromXPCObject:(id)arg1 allowingSimpleMessageSend:(bool)arg2 outInvocation:(id*)arg3 outArguments:(id*)arg4 outArgumentsMaxCount:(unsigned long long)arg5 outMethodSignature:(id*)arg6 outSelector:(SEL*)arg7 interface:(id)arg8;
- (id)_decodeObjectOfClasses:(id)arg1 atObject:(struct { unsigned long long x1; int x2; }*)arg2;
- (id)_decodeReplyFromXPCObject:(id)arg1 forSelector:(SEL)arg2 interface:(id)arg3;
- (void)_startReadingFromXPCObject:(id)arg1;
- (void)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(bool)arg3;
- (id)allowedClasses;
- (bool)allowsKeyedCoding;
- (id)connection;
- (bool)containsValueForKey:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (bool)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (id)decodeObject;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (id)decodeXPCObjectForKey:(id)arg1;
- (id)decodeXPCObjectOfType:(struct _xpc_type_s { }*)arg1 forKey:(id)arg2;
- (id)init;
- (void)set_connection:(id)arg1;

@end
