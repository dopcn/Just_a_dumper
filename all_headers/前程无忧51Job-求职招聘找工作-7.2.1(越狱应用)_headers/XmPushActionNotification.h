//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, NSString, Target;

@interface XmPushActionNotification : NSObject <NSCoding>
{
    NSString *__debug;
    Target *__target;
    NSString *__id;
    NSString *__appId;
    NSString *__type;
    _Bool __requireAck;
    NSString *__payload;
    NSDictionary *__extra;
    NSString *__packageName;
    NSString *__category;
    _Bool __debug_isset;
    _Bool __target_isset;
    _Bool __id_isset;
    _Bool __appId_isset;
    _Bool __type_isset;
    _Bool __requireAck_isset;
    _Bool __payload_isset;
    _Bool __extra_isset;
    _Bool __packageName_isset;
    _Bool __category_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetCategory;
- (_Bool)categoryIsSet;
@property(retain, nonatomic, getter=category, setter=setCategory:) NSString *category;
- (void)unsetPackageName;
- (_Bool)packageNameIsSet;
@property(retain, nonatomic, getter=packageName, setter=setPackageName:) NSString *packageName;
- (void)unsetExtra;
- (_Bool)extraIsSet;
@property(retain, nonatomic, getter=extra, setter=setExtra:) NSDictionary *extra;
- (void)unsetPayload;
- (_Bool)payloadIsSet;
@property(retain, nonatomic, getter=payload, setter=setPayload:) NSString *payload;
- (void)unsetRequireAck;
- (_Bool)requireAckIsSet;
@property(nonatomic, getter=requireAck, setter=setRequireAck:) _Bool requireAck;
- (void)unsetType;
- (_Bool)typeIsSet;
@property(retain, nonatomic, getter=type, setter=setType:) NSString *type;
- (void)unsetAppId;
- (_Bool)appIdIsSet;
@property(retain, nonatomic, getter=appId, setter=setAppId:) NSString *appId;
- (void)unsetId;
- (_Bool)idIsSet;
@property(retain, nonatomic, getter=id, setter=setId:) NSString *id;
- (void)unsetTarget;
- (_Bool)targetIsSet;
@property(retain, nonatomic, getter=target, setter=setTarget:) Target *target;
- (void)unsetDebug;
- (_Bool)debugIsSet;
@property(retain, nonatomic, getter=debug, setter=setDebug:) NSString *debug;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDebug:(id)arg1 target:(id)arg2 id:(id)arg3 appId:(id)arg4 type:(id)arg5 requireAck:(_Bool)arg6 payload:(id)arg7 extra:(id)arg8 packageName:(id)arg9 category:(id)arg10;

@end

