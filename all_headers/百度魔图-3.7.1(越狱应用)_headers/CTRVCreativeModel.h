//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTArchiveModel.h"

@class NSArray, NSString;

@interface CTRVCreativeModel : CTArchiveModel
{
    _Bool _is_wifi;
    NSString *_error;
    NSArray *_creatives;
    NSString *_country;
    long long _total_creatives;
    long long _total_videos;
    NSString *_slot_id;
}

+ (id)objectClassInArray;
@property(retain, nonatomic) NSString *slot_id; // @synthesize slot_id=_slot_id;
@property(nonatomic) _Bool is_wifi; // @synthesize is_wifi=_is_wifi;
@property(nonatomic) long long total_videos; // @synthesize total_videos=_total_videos;
@property(nonatomic) long long total_creatives; // @synthesize total_creatives=_total_creatives;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSArray *creatives; // @synthesize creatives=_creatives;
@property(retain, nonatomic) NSString *error; // @synthesize error=_error;
- (void).cxx_destruct;

@end

