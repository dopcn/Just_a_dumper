//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YYModel-Protocol.h"

@class NSString;

@interface EMMHomeItem : NSObject <YYModel>
{
    long long _type;
    long long _roomId;
    NSString *_coverUrl;
    NSString *_title;
    id _entity;
}

@property(retain, nonatomic) id entity; // @synthesize entity=_entity;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)modelCustomTransformToDictionary:(id)arg1;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

