//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACEventAutoUpload.h"

@class NSMutableDictionary, NSString;
@protocol Optional;

@interface ACType2EventAutoUpload : ACEventAutoUpload
{
    NSMutableDictionary<Optional> *_payload;
    NSString<Optional> *_time;
}

@property(copy, nonatomic) NSString<Optional> *time; // @synthesize time=_time;
@property(retain, nonatomic) NSMutableDictionary<Optional> *payload; // @synthesize payload=_payload;
- (void).cxx_destruct;
- (_Bool)addCount:(unsigned long long)arg1 forKey:(id)arg2 inDictionary:(id)arg3;
- (_Bool)addOnceForKey:(id)arg1 inDictionary:(id)arg2;
- (id)customContentPV;
- (void)mergeFromACEvent:(id)arg1;
- (id)type;
- (id)type2EventItemWithEventIdentifier:(id)arg1;
- (id)init;

@end

