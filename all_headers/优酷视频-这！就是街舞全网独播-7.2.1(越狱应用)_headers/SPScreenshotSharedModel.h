//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface SPScreenshotSharedModel : NSObject
{
    _Bool _showRedDot;
    int _activityType;
    NSString *_circleName;
    NSString *_circleId;
    NSString *_barIconImageUrl;
    NSString *_source;
    UIImage *_shareImage;
    NSString *_filePath;
    NSString *_activityDesc;
    long long _shareScene;
    NSString *_activityName;
    NSString *_activityIconImageUrl;
    NSString *_fandomIds;
    NSString *_sourceName;
    NSString *_relatePostId;
    NSString *_relateTopicId;
    NSString *_showId;
    NSString *_vid;
    NSString *_startTime;
    NSString *_endTime;
    NSString *_playerBubbleText;
    NSString *_playerBubbleImageUrl;
    NSString *_screenshotBubbleText;
    NSString *_screenshotBubbleImageUrl;
    NSString *_shareText;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *shareText; // @synthesize shareText=_shareText;
@property(copy, nonatomic) NSString *screenshotBubbleImageUrl; // @synthesize screenshotBubbleImageUrl=_screenshotBubbleImageUrl;
@property(copy, nonatomic) NSString *screenshotBubbleText; // @synthesize screenshotBubbleText=_screenshotBubbleText;
@property(copy, nonatomic) NSString *playerBubbleImageUrl; // @synthesize playerBubbleImageUrl=_playerBubbleImageUrl;
@property(copy, nonatomic) NSString *playerBubbleText; // @synthesize playerBubbleText=_playerBubbleText;
@property(nonatomic) _Bool showRedDot; // @synthesize showRedDot=_showRedDot;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *showId; // @synthesize showId=_showId;
@property(copy, nonatomic) NSString *relateTopicId; // @synthesize relateTopicId=_relateTopicId;
@property(copy, nonatomic) NSString *relatePostId; // @synthesize relatePostId=_relatePostId;
@property(copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(copy, nonatomic) NSString *fandomIds; // @synthesize fandomIds=_fandomIds;
@property(copy, nonatomic) NSString *activityIconImageUrl; // @synthesize activityIconImageUrl=_activityIconImageUrl;
@property(nonatomic) int activityType; // @synthesize activityType=_activityType;
@property(copy, nonatomic) NSString *activityName; // @synthesize activityName=_activityName;
@property(nonatomic) long long shareScene; // @synthesize shareScene=_shareScene;
@property(copy, nonatomic) NSString *activityDesc; // @synthesize activityDesc=_activityDesc;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) UIImage *shareImage; // @synthesize shareImage=_shareImage;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *barIconImageUrl; // @synthesize barIconImageUrl=_barIconImageUrl;
@property(copy, nonatomic) NSString *circleId; // @synthesize circleId=_circleId;
@property(copy, nonatomic) NSString *circleName; // @synthesize circleName=_circleName;
- (void).cxx_destruct;
- (void)parseScreenshotSharedModel:(id)arg1;

@end

