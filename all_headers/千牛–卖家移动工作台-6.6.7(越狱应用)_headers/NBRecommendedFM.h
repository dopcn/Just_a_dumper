//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface NBRecommendedFM : NSObject
{
    NSString *_topic;
    NSString *_fmId;
    NSString *_name;
    NSString *_descr;
    NSString *_icon;
    NSString *_pvSum;
    NSString *_collectionSum;
    NSString *_commentsSum;
    NSNumber *_hasSub;
}

+ (id)recommendedFMByDictionary:(id)arg1;
@property(retain, nonatomic) NSNumber *hasSub; // @synthesize hasSub=_hasSub;
@property(retain, nonatomic) NSString *commentsSum; // @synthesize commentsSum=_commentsSum;
@property(retain, nonatomic) NSString *collectionSum; // @synthesize collectionSum=_collectionSum;
@property(retain, nonatomic) NSString *pvSum; // @synthesize pvSum=_pvSum;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *descr; // @synthesize descr=_descr;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *fmId; // @synthesize fmId=_fmId;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (void).cxx_destruct;

@end

