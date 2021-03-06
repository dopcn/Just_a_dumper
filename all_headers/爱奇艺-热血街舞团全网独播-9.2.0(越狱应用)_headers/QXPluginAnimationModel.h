//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QXPluginAnimationModel : NSObject
{
    _Bool _isFullPlatformMsg;
    _Bool _car;
    int _loopCount;
    NSString *_filePath;
    long long _type;
    NSString *_swf_type;
    NSString *_swf_points;
    NSString *_swf_imageUrl;
    NSString *_anchor_name;
    NSString *_anchor_id;
    NSString *_effectId;
    long long _position;
    NSString *_name;
    NSString *_carName;
    NSString *_badgeLevel;
    NSString *_guardLevel;
    struct CGRect _rect;
}

+ (id)modelWithAnyObject:(id)arg1;
+ (id)modelWithSendStarObject:(id)arg1;
+ (id)modelWithSendSpecialGiftObject:(id)arg1;
+ (id)modelWithSendGiftObject:(id)arg1;
+ (id)modelWithUserOnlineObject:(id)arg1;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(copy, nonatomic) NSString *guardLevel; // @synthesize guardLevel=_guardLevel;
@property(copy, nonatomic) NSString *badgeLevel; // @synthesize badgeLevel=_badgeLevel;
@property(copy, nonatomic) NSString *carName; // @synthesize carName=_carName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *effectId; // @synthesize effectId=_effectId;
@property(nonatomic, getter=isCar) _Bool car; // @synthesize car=_car;
@property(nonatomic) _Bool isFullPlatformMsg; // @synthesize isFullPlatformMsg=_isFullPlatformMsg;
@property(retain, nonatomic) NSString *anchor_id; // @synthesize anchor_id=_anchor_id;
@property(retain, nonatomic) NSString *anchor_name; // @synthesize anchor_name=_anchor_name;
@property(retain, nonatomic) NSString *swf_imageUrl; // @synthesize swf_imageUrl=_swf_imageUrl;
@property(retain, nonatomic) NSString *swf_points; // @synthesize swf_points=_swf_points;
@property(retain, nonatomic) NSString *swf_type; // @synthesize swf_type=_swf_type;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) int loopCount; // @synthesize loopCount=_loopCount;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;

@end

