//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface JDYProtocolAction : NSObject
{
    NSString *_from;
    NSDictionary *_parameters;
    NSString *_eventName;
}

@property(retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
- (void).cxx_destruct;
- (void)handlePublicProtocolWithCallback:(CDUnknownBlockType)arg1 linkContextDataSource:(id)arg2;
- (void)handlePublicProtocolSuccess:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2 callback:(CDUnknownBlockType)arg3 linkContextDataSource:(id)arg4;

@end

