//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTTourBaseModel.h"

@class NSNumber, NSString;

@interface CTTourDetailPromotionCodeInfoListItem : CTTourBaseModel
{
    NSNumber *_Channel;
    NSString *_activityId;
    NSString *_name;
    NSString *_desc;
    NSString *_scheduleList;
    NSString *_channelName;
    NSString *_channelText;
}

+ (id)modelCustomPropertyMapper;
@property(retain) NSString *channelText; // @synthesize channelText=_channelText;
@property(retain) NSString *channelName; // @synthesize channelName=_channelName;
@property(retain) NSString *scheduleList; // @synthesize scheduleList=_scheduleList;
@property(retain) NSString *desc; // @synthesize desc=_desc;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain) NSNumber *Channel; // @synthesize Channel=_Channel;
- (void).cxx_destruct;

@end

