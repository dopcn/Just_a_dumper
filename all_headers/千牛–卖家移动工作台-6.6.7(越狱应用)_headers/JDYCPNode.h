//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface JDYCPNode : NSObject
{
    long long _protocolId;
    NSString *_eventName;
    NSString *_protocolCode;
    NSString *_protocolType;
    long long _level;
    NSString *_accessControl;
    NSString *_comProtUrl;
    NSArray *_parameters;
}

+ (id)protocolFromDic:(id)arg1 encryptKey:(id)arg2 inUserContext:(id)arg3;
@property(retain, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSString *comProtUrl; // @synthesize comProtUrl=_comProtUrl;
@property(retain, nonatomic) NSString *accessControl; // @synthesize accessControl=_accessControl;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(retain, nonatomic) NSString *protocolType; // @synthesize protocolType=_protocolType;
@property(retain, nonatomic) NSString *protocolCode; // @synthesize protocolCode=_protocolCode;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(nonatomic) long long protocolId; // @synthesize protocolId=_protocolId;
- (void).cxx_destruct;

@end

