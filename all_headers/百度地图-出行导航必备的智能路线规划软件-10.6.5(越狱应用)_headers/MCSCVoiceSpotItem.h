//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IphoneComFramework/JSONModel.h>

@class NSArray, NSString;

@interface MCSCVoiceSpotItem : JSONModel
{
    NSString *_desp;
    NSString *_name;
    NSString *_image_url;
    long long _priority;
    NSString *_uid;
    NSString *_source;
    long long _index;
    NSArray *_spath;
    struct BMPoint _geoPoint;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(copy, nonatomic) NSArray *spath; // @synthesize spath=_spath;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) struct BMPoint geoPoint; // @synthesize geoPoint=_geoPoint;
@property(copy, nonatomic) NSString *image_url; // @synthesize image_url=_image_url;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *desp; // @synthesize desp=_desp;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

